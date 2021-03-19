// 문제 설명
// 문자열 s에 나타나는 문자를 큰것부터 작은 순으로 정렬해 새로운 문자열을 리턴하는 함수, solution을 완성해주세요.
// s는 영문 대소문자로만 구성되어 있으며, 대문자는 소문자보다 작은 것으로 간주합니다.

// 제한 사항
// str은 길이 1 이상인 문자열입니다.
// 입출력 예
// s	return
// "Zbcdefg"	"gfedcbZ"

// 배운점
// String.split("") : String -> char[] 로 변환
// toString() : 배열을 하나의 문자열로 리턴(','를 연결자로 합침), [g,f,e,d,c,b,Z] => "g,f,e,d,c,b,Z"
// join(c =',') : 배열을 하나의 문자열로 리턴(c를 연결자로 합침), [g,f,e,d,c,b,Z] => "g,f,e,d,c,b,Z"

function solution(s) {
    
    return [...s].sort((a,b) => (a>b? -1:1)).join('');
}

// function solution2(s) {
    
//     return s
//         .split("")
//         .sort()
//         .reverse()
//         .join("");
// }

var s = "Zbcdefg";
console.log(solution2(s));