// 문제 설명
// 임의의 양의 정수 n에 대해, n이 어떤 양의 정수 x의 제곱인지 아닌지 판단하려 합니다.
// n이 양의 정수 x의 제곱이라면 x+1의 제곱을 리턴하고, n이 양의 정수 x의 제곱이 아니라면 -1을 리턴하는 함수를 완성하세요.

// 제한 사항
// n은 1이상, 50000000000000 이하인 양의 정수입니다.
// 입출력 예
// n	return
// 121	144
// 3	-1
// 입출력 예 설명
// 입출력 예#1
// 121은 양의 정수 11의 제곱이므로, (11+1)를 제곱한 144를 리턴합니다.

// 입출력 예#2
// 3은 양의 정수의 제곱이 아니므로, -1을 리턴합니다.

// 배운점
// 모듈러 연산이 생각보다 느리다
// 일반 숫자 계산으로 해결 가능하면, 수식이 좀 복잡하더라도 수식이 빠름
// Math.pow() 보다 ** 를 사용하자

function solution(n) {
    
    return Math.sqrt(n) - Math.floor(Math.sqrt(n)) > 0 ? -1:Math.pow(Math.sqrt(n)+1,2);
}

var n = 144;
console.log(solution(n));