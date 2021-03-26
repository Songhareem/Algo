// 문제 설명
// 함수 solution은 정수 n을 매개변수로 입력받습니다. 
// n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 리턴해주세요. 
// 예를들어 n이 118372면 873211을 리턴하면 됩니다.

// 제한 조건
// n은 1이상 8000000000 이하인 자연수입니다.
// 입출력 예
// n	    return
// 118372	873211

function solution(n) {

    // 문자열 변환을 이용한 정렬
    //return Number(String(n).split("").sort((a,b) => b-a).join(""));

    var arr = []
    while(n>0) {
        arr.push(n%10);
        n=Math.floor(n/10);
    }
    return Number(arr.sort((a,b) => b-a).join(""));
}

var n = 118372;
console.log(solution(n));