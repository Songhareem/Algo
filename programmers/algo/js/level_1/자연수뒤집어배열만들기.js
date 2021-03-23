// 문제 설명
// 자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요. 예를들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다.

// 제한 조건
// n은 10,000,000,000이하인 자연수입니다.
// 입출력 예
// n	return
// 12345	[5,4,3,2,1]

// 배운점
// 문자풀이 / 숫자풀이 결과
// 숫자풀이가 조금 더 빠름 (평균 0.01ms)
// 가독성을 위해서는 문자풀이가, 성능을 위해서는 숫자풀이가 좋을듯 / 유동적인 판단 필요
function solution(n) {

    // 문자풀이
    // return String(n).split("").reverse().map(value => Number(value));
    
    // 숫자풀이
    var answer = [];
    
    do{
        answer.push(n%10);
        console.log(Math.floor(n/10));
        n = Math.floor(n/10);
    } while(n>0)

    return answer;
}

var n = 12345;
console.log(solution(n));