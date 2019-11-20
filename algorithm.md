
# 시간복잡도 (Time Complexity)

- 작성한 코드의 대략적인 소요 시간 예상 가능

- Big-O 사용

- 입력크기 N에 대해 시간이 얼마나 걸릴지 나타냄

- 최악의 경우 시간이 얼마나 걸리는지 알 수 있음

- 소스를 보고 계산 가능, 소스를 작성하기 전에도 먼저 계산 가능

- 소스 작성전, 시간복잡도를 계산해보고 가능할 것 같은 경우에만 구현할 것

- Big O 의 결과가 1억 => 약 1초

- 1초가 걸리는 입력의 크기
    - O(1)
    - O(lgN)
    - O(N) : 1억
    - O(NlgN) : 5백만
    - O(N^2) : 1만
    - O(N^3) : 500
    - O(2^N) : 20
    - O(N!) : 10

- 시간복잡도 계산
    - 상수는 버린다
        - O(3N^2) = O(N^2)
        - O(1/2N^2) = O(N^2)
        - O(5) = O(1)

    - 두가지 항이 있을 때, 변수가 같다면 큰것만 남긴다
        - O(N^2 + N) = O(N^2)
        - O(N^2 + NlgN) = O(N^2)

    - 두가지 항이 있을 때, 변수가 다르면 다 남긴다
        - O(N^2 + M)

# 메모리

- 공간을 많이 사용하는 것은 보통 배열
    - 배열이 사용한 공간 : 배열의 크기 X 자료형의 크기 Byte
        - int a[10000] = 10000 x 4B = 40,000 B = 약 40 KB
        - int a[100000] = 약 400 KB
        - int a[1000000] = 약 4 Mb
        - int a[1000][1000] = 1000000 x 4B = 4,000,000 B = 약 4MB
        - int a[10000][10000] = 약 400 MB
        - int a[100000][100000] = 10000000000 x 4B = 40,000,000,000 = 약 40GB

# 입출력

- C
    - scanf / printf 사용

- C++
    - scanf / printf
    - cin / cout 사용
        - 기본적으로 scanf / printf 보다 느리다
        - 사용시, ios_base::sync_with_stdio(false);<br/>
          cin.tie(NULL(=nullptr));<br/>
          cout.tie(NULL(=nullptr));<br/>
        - 이 경우 cin, cout 만 써야한다
        - cin.tie(nullptr) 이후, cin >>
        - cout << << '\n'
    - cin.ignore() : 강제로 아래로 가게 함
    - getline(cin,str) : 개행문자가 나올때까지 입력받음

- Java
    - Scanner / System.out
        - Scanner sc = new Scanner(System.in);
    - 입력이 많으면 느리므로, BufferedReader 사용
        - BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    - 출력이 많은 경우 StringBuilder 사용해서 한 문자열로 한번에 출력, 또는
    - BufferedWriter 사용

- 테스트 케이스 방식의 경우,<br/>
  입력값을 다 받아놓고 처리후 전부 출력 보다는<br/>
  입력 처리 출력 의 반복이 좋음 

- EOF 방식,<br/>
  C: while(scanf("%d %d",&a,&b) == 2) // scanf의 리턴은 입력받은 변수의 갯수 <br/>
  C++ : while(cin >> a >> b) // cin의 리턴은 입력이 있다면 true, 없다면 false<br/>
  Java : while (sc.hasNextInt()) // hasNextInt()은 입력갑이 생기면 리턴 (Int형이면 true, 아니면 false)

# 스택

- 한쪽 끝에서 자료 넣고 빼는 구조, LIFO

- push/pop/top/empty/size

- top : 데이터 인/아웃 풋 되는 공간

- 시간복잡도
    - push : O(1)
    - pop : O(1)
    - top : O(1)
    - empty : O(1)
    - size : arr기반 O(1), List기반 O(N)

- C++ : std::stack

- 활용 : 
    - 단어 뒤집기 (9093) : str에 '\n' 추가해서 스택에 push, ' ', '\n' 나오면 스택에서 pop
    - 괄호 (9012) : 여는 괄호만 스택에 push, 닫는 괄호 만나면 최근 push된 여는 괄호를 pop
    - 스택 수열 (1874) : 스택의 성질이용?
    - 에디터 (1406) : 커서의 위치를 기준으로 스택을 둘로 나누어 문자열 관리,<br/>
      왼쪽 스택에 다 쌓아두고 커서위치만큼 오른쪽 스택으로 이동 (초기화),<br/>
      출력전에 왼쪽 스택 데이터 전부 오른쪽으로 이동 (출력) 

- 데이터가 순차적으로 추가되는데, 마지막만 의미를 가질 때, 활용 고민

# 큐

- 한쪽은 넣고 한쪽은 빼는구조, LIFO, 주로 BFS 알고리즘에 사용

- push/pop/front/back/empty/size

- front : 삭제(pop) , rear : 삽입(push)

- 시간복잡도
    - push : O(1)
    - pop : O(1)
    - top : O(1)
    - empty : O(1)
    - size : O(1)

- C++ : std::queue

- 활용 : 
    - 조세퍼스 문제(1158) : n명 앉았을때, m번쨰마다 뺌 n=7, m=3
        -  [1,2,3,4,5,6,7] -> 3,6,2,7,5,1,4
        - m이하일땐 pop 한 값을 push, m 일때는 return
    
    - BFS : 

# 덱

- 양끝에서 자료를 넣고 빼고 가능한 자료구조, Double-Ended-Queue의 약자

- push_front/push_back/pop_fornt/pop_back/front/back

# 수학1

- 나머지연산
    - (A+B)%M = (A%M + B%M) %M
    - (AxB)%M = (A%M x B%M) %M
    - (A-B)%M = (A%M - B%M + M) %M // +M은 (A%M - B%M)의 값을 항상 양수로 만듦

- 최대공약수
    - 유클리드 호제법 사용
    - 유클리드 호제법 : O(lgN)

- 최소공배수
    - 두수 a,b의 최대공약수가 g 일 때, 최소공배수 LCM = g*(a/g)*(b/g)
    - 활용 : 
        - 최대공약수 최소공배수(2609)

- 소수
    - 2 ~ N-1 까지 나누는 방법 O(N)
    - N = 2 x N/2일때, N/2+1 ~ N-1 까지는 약수가 없음, 2 ~ N/2까지 나누는 방법 O(N/2) => O(N)
    - N이 소수 아니라면, N=axb 이므로 a<=√N b>=√N, 소수라면 a<√N or b>√N에 약수 존재할 수 없음, 2 ~ √N 까지 나누는 방법 O(<√N)
    - 활용 : 
        - 어떤수 N 소수 판별 O(<√N) => 2 ~ <√N 까지 방법 사용
        - N이하 자연수 중 소수 찾기 O(NlglgN) => 에라토스테네스의 체 방법 사용
        - 골드바흐의 추측 (6588)
            - 2보다 큰 모든 짝수는 두 소수의 합으로 표현 가능하다
            - 5보다 큰 모든 홀수는 세 소수의 합으로 표현 가능하다
            - 10^18 이하에서는 참인것이 증명됨
            - 에레토스테네스의 체를 이용하여 1,000,000 이하 검증하는 문제
            - N-b가 소수? => check[N-b] = false 라면 소수
        
- 팩토리얼
    - 활용 :
        - 팩토리얼 뒤에서부터의 0 갯수(1676)
            - 소인수분해를 해서 2x5 세트 갯수를 알면 됨 
            - 팩토리얼에서 2의 갯수 > 5의 갯수, 5의 갯수만 구하면 됨
            - N/5 + N/5^2 + ... + N/5^m = 답 (5^m < N)

        - 조합 0의 갯수 (2004)
            - 소인수분해 해서 2x5 세트의 갯수를 알면 됨
            - 2의 갯수가 더 많을지 5의 갯수가 더 많을지 모름
            - 둘다 구해서 더 작은 값으로 나온 갯수를 답으로 도출

# 다이나믹 프로그래밍 (큰 문제를 작은 문제로 나눠 푸는것)

- DP
    - 작은문제가 중복가능

- 분할정복
    - 작은문제가 유니크

- 다이나믹 프로그래밍으로 풀수있는 문제의 조건
    - Overlapping Subproblem : 겹치는 작은 문제
    - Optimal Substructure : 최적부분구조(문제의 정답을 작은문제의 정답에서 구할 수 있다)


- 다이나믹 구현 방식
    - Top-down : 큰 문제 -> 작은문제 쪼개서 합쳐서 구하는 것 (재귀)
    - Bottom-up : 작은문제 -> 큰문제 합쳐서 구하는것 (반복)

- 점화식으로 많이 풂

- Big O = 문제의 갯수 x 문제당 걸리는 시간의 수 = 대부분 O(N)

- 활용 :
    - 피보나치 수열
        - F(N) = F(N-1) + F(N-2), N은 큰문제 N-1 / N-2 작은문제
        - 그냥 풀면 O(2^N), 메모리제이션 방법 사용시 NxO(1) = O(N)
    - 1로 만들기(1463)
        - 그리드 알고리즘으로 풀면 반례가 있음 (10 - 9 - 3 - 1)
        - D[N] = 1 + min(D[N/3], D[N/2], D[N-1])
    - 2xN 타일링(11726)
        - 2xN 직사각형을 1x2, 2x1 타일로 채우는 방법의 수
        - 마지막에 놓을 수 있는 타일은 2x1 한개 세로로 or 2x1 두개 가로
        - D[N] = D[n-1] + D[N-2]
    - 2XN 타일링2 (11727)
        - 2xN 직사각형을 1x2, 2x1, 2x2 타일로 채우는 방법의 수
        - D[N] = D[n-1] + D[N-2] + D[N-2] = D[N-1] + 2D[N-2]
    - 1,2,3 더하기
        - D[0] = 1, 1과 2와 3을 0번씩 사용하는 경우
        - D[1] = 1, D[2] = 2, D[3] = 4
        - D[N] = D[N-1] + D[N-2] + D[N-3] (단, N>=4)

# 배운 코드

<pre>
i ~ N 까지의 합 ?
    int sum = N * (N + 1) / 2;
    O(1)

유클리드 호제법 ?
    int gcd(int a, int b) {

        if(b=0)
            return a;
        else
            return(b,a%b);
    }

    int gcd(int a, int b) {

        while(b!=0) {

            int r = a%b;
            a = b;
            b = r;
        }
    }

소수 찾기 ?
    2 ~ <√N 방법
    bool prime(int n) {

        if(n < 2)
            return false;
        // i<=√N 는 실수 이므로, i*i<=n으로 대체
        for(int i=2; i*i<=n; i++) {
            if(n%i == 0)
                return false;
        }

        return true;
    }

    에라토스테네스의 채
    void getPrimes(int n, int *getPrimes) {

        int *primes = new int[n]; // 소수저장
        int pn = 0; //소수의 개수
        bool check = new bool[n+1]; //지워졌으면 true
        int n=n; // n까지 소수
        for(int i=2; i<=n; i++) {
            if(check[i] == false) {
                prime[pn++] = i;
                for(int j=i*2; j<=n; j+=i) {
                    check[j] = true;
                }
            }
        }

        getPrimes = primes;
        delete primes;
        delete check;
    }

피보나치 수
    Top-down
    memorization이용        N     x     O(1)            = O(N)
    => 문제를 한번씩 풂 (문제의 갯수x문제 1개를 푸는시간) 
    int memo[100] = {0, };
    int fibonacci(int n) {
        if(n<=1) {
            return n;
        }
        else {
            if(memo[n]==0) {
                memo[n] = fibonacci(n-1) + fibonacci(n-2);  // O(1);
            }
            return memo[n];
        }
    }
    Bottom-up = O(N)
    int fibo[100] = {0,};
    int fibonacci(int n) {
        fibo[0] = 0;
        fibo[1] = 1;
        for(int i=2; i<=n; i++){
            fibo[i] = fibo[i-1] + fibo[i-2];
        }
        return fibo[n];
    }

1로 만들기
    Top-down
    int go(int n) {
        if(n == 1) return 0;    // 1은 목적지이므로 더 이상 변환횟수 필요 X => 0
        if(d[n] > 0) return d[n];   // memorization

        d[n] = go(n-1) + 1;
        if(n%2 == 0) {
            int temp = go(n/2) + 1;
            if(d[n] > temp) d[n] = temp;
        }
        if(n%3 == 0) {
            int temp = go(n/3) + 1;
            if(d[n] > temp) d[n] = temp;
        }
    
        return d[n];
    }
    Bottom-up
    d[1] = 0;
    int go(int n) {
        for(int i=2; i<=n; i++) {
            d[n] = d[n-1] + 1;
            if(i%2 == 0 && d[i] > d[i/2] + 1) {
                d[i] = d[i/2] + 1;
            }
            if(i%3 == 0 && d[i] > d[i/3] + 1) {
                d[i] = d[i/3] + 1;
            }
        }
    }

</pre>
            