
// 배운점
// 두개의 큐를 사용
// Array.from으로 빈 배열 초기화
// Array에 대한 이해 ref : https://velog.io/@teihong93/Array.from%EC%9D%84-%ED%86%B5%ED%95%9C-%EB%B0%B0%EC%97%B4%EC%9D%98-%EC%B4%88%EA%B8%B0%ED%99%94

const example = {
    '1': ['2', '4'],
    '2': ['1', '3', '5'],
    '3': ['2', '6'],
    '4': ['1', '5', '7'],
    '5': ['2', '4', '6', '8'],
    '6': ['3', '5', '9'],
    '7': ['4', '8', '*'],
    '8': ['5', '7', '9', '0'],
    '9': ['6', '8', '#'],
    '*': ['7', '0'],
    '0': ['8', '*', '#'],
    '#': ['9', '0'],
}

const solution = (n, edge) => {
    // graph 생성 (인접리스트 생성 및 간선 생성)
    const graph = Array.from({ length: n }, () => []);
    edge.forEach(([a,b]) => {
        console.log(a,b);
        graph[a-1].push(b-1); // 간선 생성
        graph[b-1].push(a-1); // 간선 생성
    });

    const que = [[0,0]];
    const visited = [true];
    const depNum = [];
    
    while(que.length) {
        const [cur, dep] = que.shift();     // cur = dep = 0;
        depNum[dep] = depNum[dep] ? depNum[dep]+1 : 1;
        graph[cur].forEach(n => {
            if(!visited[n]) {
                visited[n] = true;
                que.push([n, dep+1]);
            }
        })
    }
    
    return depNum[depNum.length-1];
}

const n = 6;
const edge = [[3, 6], [4, 3], [3, 2], [1, 3], [1, 2], [2, 4], [5, 2]];
console.log(solution(n, edge));