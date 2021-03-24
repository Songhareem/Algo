// 문제 설명
// 정수를 저장한 배열, arr 에서 가장 작은 수를 제거한 배열을 리턴하는 함수, solution을 완성해주세요. 
// 단, 리턴하려는 배열이 빈 배열인 경우엔 배열에 -1을 채워 리턴하세요. 
// 예를들어 arr이 [4,3,2,1]인 경우는 [4,3,2]를 리턴 하고, [10]면 [-1]을 리턴 합니다.

// 제한 조건
// arr은 길이 1 이상인 배열입니다.
// 인덱스 i, j에 대해 i ≠ j이면 arr[i] ≠ arr[j] 입니다.
// 입출력 예
// arr	        return
// [4,3,2,1]	[4,3,2]
// [10]	        [-1]

// 배운점
// 1) Math.min(1,2,3,4,5): 들어온 요소들을 비교하여 min값 도출

function solution(arr) {
    
    var min = Math.min(...arr);
    return arr.length === 1? [-1]:arr.filter(a => min !== a);
}

var arr = [1,5,7,3,2,6];
console.log(solution(arr));