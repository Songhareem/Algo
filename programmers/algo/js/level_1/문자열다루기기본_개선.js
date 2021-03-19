
// 배운점
//
// 정규식.test(비교문자열) : 비교문자열이 정규식에 맞는지 안맞는지에 따라 true/false 반환
//
// isNan(value) : value 값이 number인지 확인
//  - (지수형태 - 1e22 등 - 이 들어가면 숫자로 판단하는 주의사항 있음)
//
// parseInt(value) : value가 숫자라면 숫자값 return / 아니라면 NaN (Not a Number) 리턴
  
function solution(s){
    console.log(parseInt(s));
    var regex = /^\d{6}$|^\d{4}$/;
    return regex.test(s);
}

var s = "a234";
console.log(solution(s));