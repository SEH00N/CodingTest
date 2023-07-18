# Baekjoon
Record of My [Baekjoon](https://www.acmicpc.net/) Coding Test

# 22-00-00


<br/>

# 2023-03
> [**A+B** 1000번 문제](https://www.acmicpc.net/problem/1000)
 - 문제
   - 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

> [**A-B** 1001번 문제](https://www.acmicpc.net/problem/1001)
 - 문제
   - 두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.

> [**A/B** 1008번 문제](https://www.acmicpc.net/problem/1008)
 - 문제
   - 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
 - 문제점
   - 소수점을 9번째 자리까지 출력해야 하는 문제.
     - cout.precision(int) 함수를 통해서 출력제한을 늘렸다.

> [**두 수 비교하기** 1330번 문제](https://www.acmicpc.net/problem/1330)
 - 문제
   - 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

> [**별 찍기 - 1** 2438번 문제](https://www.acmicpc.net/problem/2438)
 - 문제
   - 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

> [**별 찍기 - 2** 2439번 문제](https://www.acmicpc.net/problem/2439)
 - 문제
   - 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
   - 하지만, 오른쪽을 기준으로 정렬한 별을 출력하시오.

> [**주사위 세개** 2480번 문제](https://www.acmicpc.net/problem/2480)
 - 문제
   - 1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다. 
     1. 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
     2. 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
     3. 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
   - 3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.

> [**오븐 시계** 2525번 문제](https://www.acmicpc.net/problem/2525)
 - 문제
   - KOI 전자에서는 건강에 좋고 맛있는 훈제오리구이 요리를 간편하게 만드는 인공지능 오븐을 개발하려고 한다. 
   - 인공지능 오븐을 사용하는 방법은 적당한 양의 오리 훈제 재료를 인공지능 오븐에 넣으면 된다. 
   - 그러면 인공지능 오븐은 오븐구이가 끝나는 시간을 분 단위로 자동적으로 계산한다.

> [**Hello World** 2557번 문제](https://www.acmicpc.net/problem/2557)
 - 문제
   - Hello World!를 출력하시오.

> [**최댓값** 2562번 문제](https://www.acmicpc.net/problem/2562)
 - 문제
   - 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.

> [**곱셈** 2588번 문제](https://www.acmicpc.net/problem/2588)

<image src="2588번.png"></image>
 - 문제
   - (세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
   - (1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
 - 문제점
   - 입력받은 수 에서 한자리씩 차감에서 풀던 도중 둘중 한 수는 여러번 사용해야 하는 경우가 생겨 차감하는 방식으로 풀었을 때 문제가 생긴다.
     - 따라서 해당 수를 origin이라는 수에 저장해둬 루프를 끝날 때마다 차감된 수에 origin 값을 다시 대입해 해결하였다.
   - 각 자리 수를 곱하고 출력해야 하는 수를 합산할 때 특정 수를 제곱해야 할 상황이 생겼다.
     - for문을 이용한 제곱수를 구하는 함수를 만들어 사용하였다.

> [**구구단** 2739번 문제](https://www.acmicpc.net/problem/2739)
 - 문제
   - N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 
   - 출력 형식에 맞춰서 출력하면 된다.

> [**윤년** 2753번 문제](https://www.acmicpc.net/problem/2753)
 - 문제
   - 연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
   - 윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.

> [**알람 시계** 2884번 문제](https://www.acmicpc.net/problem/2884)
 - 문제
   - 현재 상근이가 설정한 알람 시각이 주어졌을 때, 45분 앞서는 시간으로 바꿔야 한다면, 이를 언제로 고쳐야 하는지 구하는 프로그램을 작성하시오.

> [**나머지** 3052번 문제](https://www.acmicpc.net/problem/3052)
 - 문제
   - 두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 
   - 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 
   - 수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 
   - 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

> [**과제 안 내신 분..?** 5597번 문제](https://www.acmicpc.net/problem/5597)
 - 문제
   - X대학 M교수님은 프로그래밍 수업을 맡고 있다. 
   - 교실엔 학생이 30명이 있는데, 학생 명부엔 각 학생별로 1번부터 30번까지 출석번호가 붙어 있다.
   - 교수님이 내준 특별과제를 28명이 제출했는데, 그 중에서 제출 안 한 학생 2명의 출석번호를 구하는 프로그램을 작성하시오.

> [**합** 8393번 문제](https://www.acmicpc.net/problem/8393)
 - 문제
   - n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

> [**시험 성적** 9498번 문제](https://www.acmicpc.net/problem/9498)
 - 문제
   - 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

> [**고양이** 10171번 문제](https://www.acmicpc.net/problem/10171)
 - 문제
   - 아래 예제와 같이 고양이를 출력하시오.
   - ```\    /\```
   - ``` )  ( ')```
   - ```(  /  )```
   - ``` \(__)|```

> [**개** 10172번 문제](https://www.acmicpc.net/problem/10172)
 - 문제
   - 아래 예제와 같이 개를 출력하시오.
   - ```|\_/|```
   - ```|q p|   /}```
   - ```( 0 )"""\```
   - ```|"^"`    |```
   - ```||_/=\\__|```

> [**나머지** 10430번 문제](https://www.acmicpc.net/problem/10430)
 - 문제
   - (A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
   - (A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
   - 세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

> [**개수 세기** 10807번 문제](https://www.acmicpc.net/problem/10807)
 - 문제
   - 총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

> [**공 넣기** 10810번 문제](https://www.acmicpc.net/problem/10810)
 - 문제
   - 도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 매겨져 있다. 또, 1번부터 N번까지 번호가 적혀있는 공을 매우 많이 가지고 있다. 가장 처음 바구니에는 공이 들어있지 않으며, 바구니에는 공을 1개만 넣을 수 있다.
   - 도현이는 앞으로 M번 공을 넣으려고 한다. 도현이는 한 번 공을 넣을 때, 공을 넣을 바구니 범위를 정하고, 정한 바구니에 모두 같은 번호가 적혀있는 공을 넣는다. 만약, 바구니에 공이 이미 있는 경우에는 들어있는 공을 빼고, 새로 공을 넣는다. 공을 넣을 바구니는 연속되어 있어야 한다.
   - 공을 어떻게 넣을지가 주어졌을 때, M번 공을 넣은 이후에 각 바구니에 어떤 공이 들어 있는지 구하는 프로그램을 작성하시오.

> [**공 바꾸기** 10813번 문제](https://www.acmicpc.net/problem/10813)
 - 문제
   - 도현이는 바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 매겨져 있다. 바구니에는 공이 1개씩 들어있고, 처음에는 바구니에 적혀있는 번호와 같은 번호가 적힌 공이 들어있다.
   - 도현이는 앞으로 M번 공을 바꾸려고 한다. 도현이는 공을 바꿀 바구니 2개를 선택하고, 두 바구니에 들어있는 공을 서로 교환한다.
   - 공을 어떻게 바꿀지가 주어졌을 때, M번 공을 바꾼 이후에 각 바구니에 어떤 공이 들어있는지 구하는 프로그램을 작성하시오.

> [**최소, 최대** 10818번 문제](https://www.acmicpc.net/problem/10818)
 - 문제
   - N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

> [**사칙연산** 10869번 문제](https://www.acmicpc.net/problem/10869)
 - 문제
   - 두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오.

> [**X보다 작은 수** 10871번 문제](https://www.acmicpc.net/problem/10871)
 - 문제
   - 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

> [**??!** 10926번 문제](https://www.acmicpc.net/problem/10926)
 - 문제
   - 준하는 사이트에 회원가입을 하다가 joonas라는 아이디가 이미 존재하는 것을 보고 놀랐다. 
   - 준하는 놀람을 ??!로 표현한다. 
   - 준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어졌을 때, 놀람을 표현하는 프로그램을 작성하시오.

> [**A+B - 3** 10950번 문제](https://www.acmicpc.net/problem/10950)
 - 문제
   - 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

> [**A+B - 4** 10951번 문제](https://www.acmicpc.net/problem/10951)
 - 문제
   - 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 - 출제 의도
   - 입력하는 값의 개수를 알지 못할 경우 입력의 끝을 어떻게 식별할 것인가?
 - 해결 방법
   - cin.eof()
     - cin.eof() 함수를 사용하면 파일의 끝일 때나 더 이상 읽을 데이터가 없을 때 true를 반환한다.
     - 이를 사용하여 A와 B를 cin으로 입력받고 방금의 입력에서 데이터가 입력되지 않았을 때 반복문을 종료시켜 해결했다.

> [**A+B - 5** 10952번 문제](https://www.acmicpc.net/problem/10952)
 - 문제
   - 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

> [**A×B** 10998번 문제](https://www.acmicpc.net/problem/10998)
 - 문제
   - 두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.

> [**A+B - 7** 11021번 문제](https://www.acmicpc.net/problem/11021)
 - 문제
   - 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

> [**A+B - 8** 11022번 문제](https://www.acmicpc.net/problem/11022)
 - 문제
   - 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

> [**꼬마 정민** 11382번 문제](https://www.acmicpc.net/problem/11382)
 - 문제
   - 꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 이제 A + B + C를 계산할 차례이다!

> [**사분면 고르기** 14681번 문제](https://www.acmicpc.net/problem/14681)
 - 문제
   - 흔한 수학 문제 중 하나는 주어진 점이 어느 사분면에 속하는지 알아내는 것이다. 
   - 사분면은 아래 그림처럼 1부터 4까지 번호를 갖는다. "Quadrant n"은 "제n사분면"이라는 뜻이다.
  
      <image src="./14681.png">

> [**빠른 A+B** 15552번 문제](https://www.acmicpc.net/problem/15552)
 - 문제
   - 본격적으로 for문 문제를 풀기 전에 주의해야 할 점이 있다. 입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점이다.
   - C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자. 단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.
   - Java를 사용하고 있다면, Scanner와 System.out.println 대신 BufferedReader와 BufferedWriter를 사용할 수 있다. BufferedWriter.flush는 맨 마지막에 한 번만 하면 된다.
   - Python을 사용하고 있다면, input 대신 sys.stdin.readline을 사용할 수 있다. 단, 이때는 맨 끝의 개행문자까지 같이 입력받기 때문에 문자열을 저장하고 싶을 경우 .rstrip()을 추가로 해 주는 것이 좋다.

> [**1998년생인 내가 태국에서는 2541년생?!** 18108번 문제](https://www.acmicpc.net/problem/18108)
 - 문제
   - ICPC Bangkok Regional에 참가하기 위해 수완나품 국제공항에 막 도착한 팀 레드시프트 일행은 눈을 믿을 수 없었다. 공항의 대형 스크린에 올해가 2562년이라고 적혀 있던 것이었다.
   - 불교 국가인 태국은 불멸기원(佛滅紀元), 즉 석가모니가 열반한 해를 기준으로 연도를 세는 불기를 사용한다. 반면, 우리나라는 서기 연도를 사용하고 있다. 불기 연도가 주어질 때 이를 서기 연도로 바꿔 주는 프로그램을 작성하시오.

> [**영수증** 25304번 문제](https://www.acmicpc.net/problem/25304)
 - 문제
   - 준원이는 저번 주에 살면서 처음으로 코스트코를 가 봤다. 정말 멋졌다. 
   - 그런데, 몇 개 담지도 않았는데 수상하게 높은 금액이 나오는 것이다! 준원이는 영수증을 보면서 정확하게 계산된 것이 맞는지 확인해보려 한다.
   - 영수증에 적힌,
     - 구매한 각 물건의 가격과 개수
     - 구매한 물건들의 총 금액
   - 을 보고, 구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하는지 검사해보자.

> [**코딩은 체육과목 입니다** 25314번 문제](https://www.acmicpc.net/problem/25314)
 - 문제
   - 오늘은 혜아의 면접 날이다. 면접 준비를 열심히 해서 앞선 질문들을 잘 대답한 혜아는 이제 마지막으로 칠판에 직접 코딩하는 문제를 받았다. 혜아가 받은 문제는 두 수를 더하는 문제였다. C++ 책을 열심히 읽었던 혜아는 간단히 두 수를 더하는 코드를 칠판에 적었다. 코드를 본 면접관은 다음 질문을 했다. 
   - “만약, 입출력이 n바이트 크기의 정수라면 프로그램을 어떻게 구현해야 할까요?”
   - 혜아는 책에 있는 정수 자료형과 관련된 내용을 기억해 냈다. 책에는 long int는 4바이트 정수까지 저장할 수 있는 정수 자료형이고 long long int는 8바이트 정수까지 저장할 수 있는 정수 자료형이라고 적혀 있었다. 혜아는 이런 생각이 들었다. 
   - “int 앞에 long을 하나씩 더 붙일 때마다 4바이트씩 저장할 수 있는 공간이 늘어나는 걸까? 분명 long long long int는 12바이트, long long long long int는 16바이트까지 저장할 수 있는 정수 자료형일 거야!” 
   - 그렇게 혜아는 당황하는 면접관의 얼굴을 뒤로한 채 칠판에 정수 자료형을 써 내려가기 시작했다.

      <image src="./25314.png">
   - 혜아가 n바이트 정수까지 저장할 수 있다고 생각해서 칠판에 쓴 정수 자료형의 이름은 무엇일까?


> [**** 번 문제](https://www.acmicpc.net/problem/)
 - 문제

<br/>

# 2023-04

|난이도|문제|풀이|번호|
|:-:|:-:|:-:|:-:|
|![](./Tier/silver5.png)|[**색종이**](https://www.acmicpc.net/problem/2563)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/2563.cpp)|2563번|
|![](./Tier/bronze3.png)|[**최댓값**](https://www.acmicpc.net/problem/2566)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/2566.cpp)|2566번|
|![](./Tier/bronze2.png)|[**문자열 반복**](https://www.acmicpc.net/problem/2675)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/2675.cpp)|2675번|
|![](./Tier/bronze5.png)|[**행렬 덧셈**](https://www.acmicpc.net/problem/2738)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/2738.cpp)|2738번|
|![](./Tier/bronze5.png)|[**단어 길이 재기**](https://www.acmicpc.net/problem/2743)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/2743.cpp)|2743번|
|![](./Tier/bronze2.png)|[**다이얼**](https://www.acmicpc.net/problem/5622)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/5622.cpp)|5622번|
|![](./Tier/bronze5.png)|[**문자열**](https://www.acmicpc.net/problem/9086)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/9086.cpp)|9086번|
|![](./Tier/bronze1.png)|[**세로읽기**](https://www.acmicpc.net/problem/10798)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/10798.cpp)|10798번|
|![](./Tier/bronze2.png)|[**알파벳 찾기**](https://www.acmicpc.net/problem/10809)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/10809.cpp)|10809번|
|![](./Tier/bronze2.png)|[**피보나치 수 5**](https://www.acmicpc.net/problem/10870)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/10870.cpp)|10870번|
|![](./Tier/bronze5.png)|[**팩토리얼**](https://www.acmicpc.net/problem/10872)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/10872.cpp)|10872번|
|![](./Tier/bronze5.png)|[**아스키 코드**](https://www.acmicpc.net/problem/11654)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/11654.cpp)|11654번|
|![](./Tier/bronze2.png)|[**재귀의 귀재**](https://www.acmicpc.net/problem/25501)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/25501.cpp)|25501번|
|![](./Tier/bronze5.png)|[**문자와 문자열**](https://www.acmicpc.net/problem/27866)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/27866.cpp)|27866번|

<br/>

# 2023-05

|난이도|문제|풀이|번호|
|:-:|:-:|:-:|:-:|
|![](./Tier/silver4.png)|[**제로**](https://www.acmicpc.net/problem/10773)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/10773.cpp)|10773번|
|![](./Tier/silver4.png)|[**스택**](https://www.acmicpc.net/problem/10828)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/10828.cpp)|10828번|
|![](./Tier/silver4.png)|[**큐 2**](https://www.acmicpc.net/problem/18258)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/18258.cpp)|18258번|

<br/>

# 2023-06

|난이도|문제|풀이|번호|
|:-:|:-:|:-:|:-:|
|![](./Tier/silver4.png)|[**요세푸스 문제**](https://www.acmicpc.net/problem/1158)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/1158.cpp)|1158번|
|![](./Tier/silver4.png)|[**배스트 셀러**](https://www.acmicpc.net/problem/1302)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/1302.cpp)|1302번|
|![](./Tier/silver4.png)|[**나는야 포켓몬 마스터 이다솜**](https://www.acmicpc.net/problem/1620)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/1620.cpp)|1620번|
|![](./Tier/silver4.png)|[**듣보잡**](https://www.acmicpc.net/problem/1764)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/1764.cpp)|1764번|
|![](./Tier/silver4.png)|[**좋은 단어**](https://www.acmicpc.net/problem/3986)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/3986.cpp)|3986번|
|![](./Tier/silver5.png)|[**숫자 카드**](https://www.acmicpc.net/problem/10815)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/10815.cpp)|10815번|

<br/>

# 2023-07

|난이도|문제|풀이|번호|
|:-:|:-:|:-:|:-:|
|![](./Tier/silver4.png)|[**대칭 차집합**](https://www.acmicpc.net/problem/1269)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/1269.cpp)|1269번|
|![](./Tier/bronze3.png)|[**공**](https://www.acmicpc.net/problem/1547)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/1547.cpp)|1547번|
|![](./Tier/bronze3.png)|[**별 찍기 - 5**](https://www.acmicpc.net/problem/2442)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/2442.cpp)|2442번|
|![](./Tier/gold4.png)|[**문자열 폭발**](https://www.acmicpc.net/problem/9935)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/9935.cpp)|9935번|
|![](./Tier/silver2.png)|[**쇠막대기**](https://www.acmicpc.net/problem/10799)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/10799.cpp)|10799번|
|![](./Tier/bronze2.png)|[**바구니 뒤집기**](https://www.acmicpc.net/problem/10811)|[**소스 코드**](https://github.com/SEH00N/CodingTest/tree/main/Baekjoon/BaekjoonCodingTest/BaekjoonCodingTest/10811.cpp)|10811번|