
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

- push/pop

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

# 배운 코드

<pre>
i ~ N 까지의 합 ?
    int sum = N * (N + 1) / 2;
    O(1)
</pre>
            