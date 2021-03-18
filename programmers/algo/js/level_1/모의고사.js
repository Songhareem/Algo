// 문제 설명
// 수포자는 수학을 포기한 사람의 준말입니다. 수포자 삼인방은 모의고사에 수학 문제를 전부 찍으려 합니다. 수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다.

// 1번 수포자가 찍는 방식: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
// 2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
// 3번 수포자가 찍는 방식: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

// 1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 주어졌을 때, 가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution 함수를 작성해주세요.

// 제한 조건
// 시험은 최대 10,000 문제로 구성되어있습니다.
// 문제의 정답은 1, 2, 3, 4, 5중 하나입니다.
// 가장 높은 점수를 받은 사람이 여럿일 경우, return하는 값을 오름차순 정렬해주세요.
// 입출력 예
// answers	return
// [1,2,3,4,5]	[1]
// [1,3,2,4,2]	[1,2,3]
// 입출력 예 설명
// 입출력 예 #1

// 수포자 1은 모든 문제를 맞혔습니다.
// 수포자 2는 모든 문제를 틀렸습니다.
// 수포자 3은 모든 문제를 틀렸습니다.
// 따라서 가장 문제를 많이 맞힌 사람은 수포자 1입니다.

// 입출력 예 #2

// 모든 사람이 2문제씩을 맞췄습니다.

// 배운점
// 한뭉텅이로 풀수 있으면 좋겠지만, 잘 안된다면 나눠서 풀것
// 점수를 비교하고 answer에 넣을때, 
// 비교값을 따로 구하고 비교값과 점수값을 비교하여 answer 구함

function solution(answers) {
    var answer = [];

    var pattern = [
        [1, 2, 3, 4, 5], 
        [2, 1, 2, 3, 2, 4, 2, 5], 
        [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    ];

    var score = [0,0,0];

    for(var i=0; i<answers.length; i++) {

        if(answers[i] === pattern[0][i%pattern[0].length]) {
            score[0]++;
        }

        if(answers[i] === pattern[1][i%pattern[1].length]) {
            score[1]++;
        }

        if(answers[i] === pattern[2][i%pattern[2].length]) {
            score[2]++;
        }
    }

    console.log(score);
    var max = -1;
    for(var i=0; i<score.length; i++) {
        max = max < score[i] ? score[i]:max;
    }

    for(var i=0; i<score.length; i++) {
        if(max === score[i]){
            answer.push(i+1);
        }
    }
    return answer;
}

var answers=[0,0,0,0,0];
console.log(solution(answers));