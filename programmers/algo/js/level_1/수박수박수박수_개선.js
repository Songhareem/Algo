
// 배운점
// String.repeat(n) : n만큼 String을 반복한 결과 return
// 문자열만 다루는거라면, String의 함수만으로 해결하는게 가장 좋을것 같다

function solution(n) {

    return "수박".repeat(n/2+1).slice(0,n);
}

var n = 5;
console.log(solution(n));