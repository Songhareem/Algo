// 배운점
// for문안에서 선언된 var 변수는 밖에서도 사용 가능
// for의 종료 조건은 0 또는 false로 가능

function solution(a, b) {

    var r;
    for(var ab=a*b; r=a%b; a=b, b=r){}
    return [b, ab/b];
}

var a = 2;
var b = 5;
console.log(solution(a, b));