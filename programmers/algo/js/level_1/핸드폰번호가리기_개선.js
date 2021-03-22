
// 배운점
// slice 는 음수도 지원, -n : 뒤에서 부터 n만큼 잘라냄

function solution(phone_number) {

    return "*".repeat(phone_number.length-4) + phone_number.slice(-4);
}

function hide_numbers(s) {

    return s.replace(/\d(?=\d{4})/g, "*");
  }

var phone_number = "027778888";
console.log(solution(phone_number));
console.log(hide_numbers(phone_number));