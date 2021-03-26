// 문제 설명
// 실패율

// 실패율은 다음과 같이 정의한다.
// 스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수 / 스테이지에 도달한 플레이어 수
// 전체 스테이지의 개수 N, 게임을 이용하는 사용자가 현재 멈춰있는 스테이지의 번호가 담긴 배열 stages가 매개변수로 주어질 때, 
// 실패율이 높은 스테이지부터 내림차순으로 스테이지의 번호가 담겨있는 배열을 return 하도록 solution 함수를 완성하라.

// 제한사항
// 스테이지의 개수 N은 1 이상 500 이하의 자연수이다.
// stages의 길이는 1 이상 200,000 이하이다.
// stages에는 1 이상 N + 1 이하의 자연수가 담겨있다.
// 각 자연수는 사용자가 현재 도전 중인 스테이지의 번호를 나타낸다.
// 단, N + 1 은 마지막 스테이지(N 번째 스테이지) 까지 클리어 한 사용자를 나타낸다.
// 만약 실패율이 같은 스테이지가 있다면 작은 번호의 스테이지가 먼저 오도록 하면 된다.
// 스테이지에 도달한 유저가 없는 경우 해당 스테이지의 실패율은 0 으로 정의한다.
// 입출력 예
// N	stages	                    result
// 5	[2, 1, 2, 6, 2, 4, 3, 3]	[3,4,2,1,5]
// 4	[4,4,4,4,4]	                [4,1,2,3]
//
// 입출력 예 설명
// 입출력 예 #1
// 1번 스테이지에는 총 8명의 사용자가 도전했으며, 이 중 1명의 사용자가 아직 클리어하지 못했다. 따라서 1번 스테이지의 실패율은 다음과 같다.
// 1 번 스테이지 실패율 : 1/8

// 2번 스테이지에는 총 7명의 사용자가 도전했으며, 이 중 3명의 사용자가 아직 클리어하지 못했다. 따라서 2번 스테이지의 실패율은 다음과 같다.
// 2 번 스테이지 실패율 : 3/7

// 마찬가지로 나머지 스테이지의 실패율은 다음과 같다.
// 3 번 스테이지 실패율 : 2/4

// 4번 스테이지 실패율 : 1/2

// 5번 스테이지 실패율 : 0/1

// 각 스테이지의 번호를 실패율의 내림차순으로 정렬하면 다음과 같다.

// [3,4,2,1,5]

// 입출력 예 #2
// 모든 사용자가 마지막 스테이지에 있으므로 4번 스테이지의 실패율은 1이며 나머지 스테이지의 실패율은 0이다.

// [4,1,2,3]

// 배운점
// forEach에서는 break가 먹지 않음
// forEach + break 대신 some() 사용 가능
// some(callback): 어떤 조건을 가진 것을 반복중 값을 return 하면 종료

// Array가 쓰기 편하므로, 특별히 Set이나 Map 을 쓸일이 아니면
// Array (또는 이중 Array) 로 해결하자

function solution(n) {

    var failRates = [];
    for(var i=1; i<=n; i++) {
        var reachedAndNotPassed = 0;
        var reached = 0;
        for(var j=0; j<stages.length; j++) {
            if(stages[j] < i) { continue; }
            if(stages[j] === i) { reachedAndNotPassed++; }
            if(stages[j] >= i) { reached++; }
        }
        failRates.push([i, reachedAndNotPassed/reached*100]);
    }
    
    console.log(failRates);
    return failRates.sort((a,b) => b[1]-a[1]).map(a => a[0]);
}


var n = 5;
var stages = [2, 1, 2, 6, 2, 4, 3, 3];
console.log(solution(n, stages));