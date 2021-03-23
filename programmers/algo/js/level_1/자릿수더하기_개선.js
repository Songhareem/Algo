
// 
// 숫자로만 연산하여 조금 더 빠른 방법

function solution(n) {
    var sum = 0;

    do {
        sum += n%10;
        n = Math.floor(n/10);
    } while(n > 0);

    return sum;
}

console.log(solution(n));
