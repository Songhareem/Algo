
// 배운점
// String.toUpperCase() : 소문자를 대문자화 한다
// String.match(정규식) : 정규식에 대해 문자열을 일치시킨 결과를 검색하여 배열로 return => ["value1", "value2", "value3"]

function solution(s){

    return s.toUpperCase().split('P').length === s.toUpperCase().split('Y').length ? true:false;
}

var s = "PPYy";
console.log(solution(s));
console.log(solution2(s));