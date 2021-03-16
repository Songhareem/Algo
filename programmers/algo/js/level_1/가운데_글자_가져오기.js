// 문제 설명
// 단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

// 재한사항
// s는 길이가 1 이상, 100이하인 스트링입니다.
// 입출력 예
// s	return
// "abcde"	"c"
// "qwer" "we"

// 배운점
// substr(startIndex, length)
// substring(startIndex, endIndex)
// slice(startIndex, endIndex)
//
// substr(startIndex, length): startIndex부터 length만큼 잘라냄
// substring(startIndex, endIndex): startIndex부터 endIndex까지 잘라냄, start > end인 경우 start와 end값 바꿔서 처리
// slice(startIndex, endIndex): startIndex부터 endIndex까지 잘라냄, start > end인 경우 "" 리턴
function solution(s) {
    var answer = '';
  
    var startIndex = 0;
    var readLength = 1;
  
    if(s.length%2) {
      startIndex = s.length>>1;
    } else {
      startIndex = (s.length>>1)-1;
      readLength = 2;
    }
    
    // slice(시작 인덱스,끝+1인덱스)
    answer = s.substr(startIndex, readLength);
    return answer;
}

var s = "qwer";
console.log(solution(s))