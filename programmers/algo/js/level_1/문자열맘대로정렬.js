// 문제 설명
// 문자열로 구성된 리스트 strings와, 정수 n이 주어졌을 때, 
// 각 문자열의 인덱스 n번째 글자를 기준으로 오름차순 정렬하려 합니다. 
// 예를 들어 strings가 ["sun", "bed", "car"]이고 n이 1이면 ,
// 각 단어의 인덱스 1의 문자 "u", "e", "a"로 strings를 정렬합니다.

// 제한 조건
// strings는 길이 1 이상, 50이하인 배열입니다.
// strings의 원소는 소문자 알파벳으로 이루어져 있습니다.
// strings의 원소는 길이 1 이상, 100이하인 문자열입니다.
// 모든 strings의 원소의 길이는 n보다 큽니다.
// 인덱스 1의 문자가 같은 문자열이 여럿 일 경우, 사전순으로 앞선 문자열이 앞쪽에 위치합니다.
//
// 입출력 예
// strings	n	return
// ["sun", "bed", "car"]	1	["car", "bed", "sun"]
// ["abce", "abcd", "cdx"]	2	["abcd", "abce", "cdx"]
//
// 입출력 예 설명
// 입출력 예 1
// "sun", "bed", "car"의 1번째 인덱스 값은 각각 "u", "e", "a" 입니다. 
// 이를 기준으로 strings를 정렬하면 ["car", "bed", "sun"] 입니다.

// 입출력 예 2
// "abce"와 "abcd", "cdx"의 2번째 인덱스 값은 "c", "c", "x"입니다. 
// 따라서 정렬 후에는 "cdx"가 가장 뒤에 위치합니다. 
// "abce"와 "abcd"는 사전순으로 정렬하면 "abcd"가 우선하므로, 
// 답은 ["abcd", "abce", "cdx"] 입니다.

// 배운점 
// array 에서 대입연산자는 포인터 복사
// array 에서 slice() 는 얕은 복사 (deepth가 1인 요소들만 깊은 복사됨)
// array 깊은 복사 (deepth가 2 이상인 요소들도 깊은 복사 됨)
//
// 이중for문 이상을 break continue하려면 label을 사용해야 함

function solution(strings, n) {
    var answer = [];

    // n까지 짤라서 뒤에다 붙이기?
    for(var i=0; i<strings.length; i++) {
        
        var front = strings[i].slice(0, n);
        var rear = strings[i].slice(n, strings[i].length);

        strings[i] = rear + front;
    }

    // sort
    strings.sort();

    // 같은 index끼리는 묶어서 2차배열 생성 ['cdab', 'ceab', 'xcd'] => [['cdab', 'ceab']['xcd']]
    var tmp = [];
    outer: for(var i=0; i<strings.length; i++) {
        
        // 첫번째는 그냥 넣음
        if(i == 0) {
            tmp.push([strings[i]]);
            continue;
        }

        // 일차 배열의 인자 첫글자와 이차 배열의 일차 배열 인자 첫글자 비교,
        // 같다면 이차의 일차 배열에 넣고 continue, 아니면 마지막까지 서치
        for(var j=0; j<tmp.length; j++) {
            if(strings[i].slice(0,1) === tmp[j][0].slice(0,1)) {
               tmp[j].push(strings[i]);
               continue outer;
            }
        }

        // 맞는게 없다면 새로운 배열로 만들어서 input
        tmp.push([strings[i]]);
    }

    // 각 배열 내 요소들 원복
    for(var i=0; i<tmp.length; i++) {
        for(var j=0; j<tmp[i].length; j++) {
            var front = tmp[i][j].slice(tmp[i][j].length-n, tmp[i][j].length);
            var rear= tmp[i][j].slice(0, tmp[i][j].length-n);

            tmp[i][j] = front + rear;
        }
    }

    // 각 배열 내 요소들 sort (length > 1)
    for(var i=0; i<tmp.length; i++) {
        if(tmp[i].length <= 1) {
            continue;
        }

        tmp[i].sort();
    }

    console.log(tmp);

    // 2차배열을 1차배열로 변형
    for(var i=0; i<tmp.length; i++) {
        for(var j=0; j<tmp[i].length; j++) {
            
            answer.push(tmp[i][j]);
        }
    }
    
    return answer;
}

var strings=["abce", "abcd", "cdx"];
var n=2;
console.log(solution(strings, n))