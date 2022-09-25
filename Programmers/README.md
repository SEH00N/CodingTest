# Programmers
Record of My [Programmers](https://programmers.co.kr/) Coding Test

# 22-09-15
 > [짝수와 홀수](https://school.programmers.co.kr/learn/courses/30/lessons/12937)
   - 문제 : 정수 num이 짝수일 때 "Even" 홀수일 때 "Odd"를 반환하는 함수를 완성하세요.
   - 삼항연산자를 활용하여 짝수, 홀수를 구분하였습니다.
 > [JadonCase](https://school.programmers.co.kr/learn/courses/30/lessons/12951)
   - 문제 : 문자열 s가 주어졌을 때, s를 JadenCase로 바꾼 문자열을 리턴하는 함수를 완성하세요.
   - js - String.replaceAt(index, value)라는 Prototype 문자열의 index위치의 문자를 value로 바꿔 반환하는 메소드를 만들어 띄어쓰기 뒤에 있는 문자를 대문자로 바꿔 해결하였습니다.
   - py, charp - replaceAt(input, index, value)라는 문자열 input의 index위치의 문자를 value로 바꿔 반환하는 메소드를 만들어 띄어쓰기 뒤에 있는 문자를 대문자로 바꿔 해결하였습니다.
   - cpp - void replace(char& target, char value)라는 메소드를 만들어 띄어쓰기 다음 위치에 오는 문자를 참조하여 대문자로 바꿔 해결하였습니다.

# 22-09-16
 > [최댓값과 최솟값](https://school.programmers.co.kr/learn/courses/30/lessons/12939)
   - 문제 : str에 나타나는 숫자 중 최소값과 최대값을 찾이를 "(최소값) (최대값)"형태의 문자열을 반환하는 함수완성하세요.
   - js, py - 띄어쓰기를 기준으로 split메소드를 사용하배열에 담아 sort메소드로 정렬하여 해결하였습니다.
   - csharp - 띄어쓰기를 기준으로 split메소드를 사용하List에 담아 sort메소드로 정렬하여 해결하였습니다.
   - cpp - stringstream을 사용하여 vector에 담sort메소드로 정렬하여 해결하였습니다.

# 22-09-17
 > [이진 변환 반복하기](https://school.programmers.co.kr/learn/courses/30/lessons/70129)
   - 0과 1로 이루어진 문자열 x에 대한 이진 변환의 정의 : x의모든 0을 제거, x의 길이를 c라고 하면 x = "c를 2진법으로표현한 문자열"
   - 문제 : 0과 1로 이루어진 문자열 s가 "1"이 될 때까지 이진변환을 가했을 때 이진 변환 횟수와 변환 과정에서 제거된 0의개수를 배열에 담아 반환하는 함수를 완성하세요.
   - js - replaceAll 함수 통해 0을 모두 지운 후 toString(2)를 통해 2진수로 바꾸는 과정을 반복하여 해결하였습니다.
   - py - replace 함수 통해 0을 모두 지운 후 bin 함수를활용하여 2진수로 바꾼 후 replace를 통해 0b(2진수 표현 형식를 지우는 과정을 반복하여 해결하였습니다. 
   - cpp - removeAll(string input, char target)라는 input의target을 모두 지운 문자열을 반환하는 메소드와 toBinary(intinput)라는 input의 2진수 값을 반환하는 메소드를 만들어해결하였습니다.
   - csharp - Replace 함수를 통해 0을 모두 지운 후 ConvertToString()함수를 통해 2진수로 바꾸는 과정을 반복하여해결하였습니다.
 > [최솟값 구하기](https://school.programmers.co.kr/learn/courses/30/lessons/12941)
   - 문제 : 입력받은 같은 크기의 두 배열에서 각각 한 숫자를 뽑아 곱한 값을 모두 더했을 때 가장 작은 값이 나오도록 하는 함수를 완성하세요.
   - 한 배열에서는 가장 큰 값, 다른 한 배열에선 가장 작은 값을 뽑아 곱한 후 더하여 해결하였습니다.
 > [올바른 괄호](https://school.programmers.co.kr/learn/courses/30/lessons/12909)
   - 문제 : 괄호로 이루어진 입력받은 문자열이 올바른 괄호인지 구분하는 함수를 완성하세요.
   - '('의 개수와 ')' 갯수가 같아야 하고 ')'가 나오기 전에는 '('이 나와야 한다는 규칙을 찾아 해결하였습니다.
 > [자릿수 더하기](https://school.programmers.co.kr/learn/courses/30/lessons/12931)
   - 문제 : 입력받은 자연수 N의 각 자릿수를 더한 값을 반환하는 함수를 완성하세요.
   - N을 문자열로 변환 후 문자열의 각 자리 값을 int로 변환하여 더해 해결하였습니다.

# 22-09-18
 > [이중우선순위큐](https://school.programmers.co.kr/learn/courses/30/lessons/42628)
   - 이중우선순위 큐 : 이중 우선순위 큐는 다음 연산을 할 수 있는 자료구조를 말합니다.
      - I 숫자 : 큐에 주어진 숫자를 삽입합니다.
      - D 1 : 큐에서 최댓값을 삭제합니다.
      - D -1 : 큐에서 최솟값을 삭제합니다.
   - 문제 : 이중 우선순위 큐가 할 연산 operations가 매개변수로 주어질 때, 모든 연산을 처리한 후 큐가 비어있으면 [0,0] 비어있지 않으면 [최댓값, 최솟값]을 return 하도록하는 함수를 완성하세요.
   - MyQueue라는 이중우선큐 클래스를 만들어 해결하였습니다.

# 22-09-19
 > [약수의 합](https://school.programmers.co.kr/learn/courses/30/lessons/12928)
   - 문제 : 정수 n을 입력받아 n의 약수를 모두 더한 값을 반환하는 함수를 완성하세요.
   - n의 제곱근만큼 반복하여 반복문 변수 i의 값이 n과 나눴을 때 나머지가 0인 경우를 i와 n / i의 값이 약수임을 찾아내 해결하였습니다.
 > [평균 구하기](https://school.programmers.co.kr/learn/courses/30/lessons/12944)
   - 문제 : 정수를 담고 있는 배열 arr의 평균값을 반환하는 함수를 완성하세요.
   - arr의 값을 모두 더한 값에 arr의 길이를 나눠 해결하였습니다.
 > [정수 제곱근 판별](https://school.programmers.co.kr/learn/courses/30/lessons/12934)
   - 문제 : n이 양의 정수 x의 제곱이라면 x+1의 제곱을 반환하고, n이 양의 정수 x의 제곱이 아니라면 -1을 반환하는 함수를 완성하세요.
   - n을 Sqrt 후 (n - (long)n == 0) 으로 정수를 구분하여 해결하였습니다.

# 22-09-20
 > [자연수 뒤집어 배열로 만들기](https://school.programmers.co.kr/learn/courses/30/lessons/12932)
   - 문제 : 자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 반환하는 함수를 완성하세요.
   - 자연수 n을 문자열로 바꿔 뒤에서부터 차례대로 배열에 담아 해결하였습니다.
 > [하샤드 수](https://school.programmers.co.kr/learn/courses/30/lessons/12947)
   - 하샤드 수 : 양의 정수 x가 하샤드 수이려면 x의 자릿수의 합으로 x가 나누어지는 수
   - 문제 : 자연수 x를 입력받아 x가 하샤드 수인지 아닌지 검사하는 함수를 완성하세요.
   - x를 x의 자릿수의 합으로 나눠 구분하였습니다.

# 22-09-21
 > [정수 내림차순 배치하기](https://school.programmers.co.kr/learn/courses/30/lessons/12933)
 - 문제 : 입력받은 n의 각 자릿수를 큰것부터 작은 순으로 정렬한 새로운 정수를 반환하는 메소드를 완성하세요.
 - n을 자릿수별로 배열에 담아 역순으로 정렬 후 자릿수 별로 곱하여 해결하였습니다.
 > [문자열을 정수로 바꾸기](https://school.programmers.co.kr/learn/courses/30/lessons/12925)
 - 문제 : 문자열 s를 숫자로 변환한 결과를 반환하는 함수를 완성하세요.
 - Int Parse 메소드를 사용해 해결하였습니다.
 > [x만큼 간격이 있는 n개의 숫자](https://school.programmers.co.kr/learn/courses/30/lessons/12954)
 - 문제 : 정수 x와 자연수 n을 입력 받아, x부터 시작해 x씩 증가하는 숫자를 n개 지니는 리스트를 반환하는 함수를 완성하세요.
 - i = 1; i <= n; i++ 만큼 반복하여 i * x를 리스트에 추가하여 해결하였습니다.
 > [나머지가 1이 되는 수 찾기](https://school.programmers.co.kr/learn/courses/30/lessons/87389)
 - 문제 : 입력받은 자연수 n을 x로 나눈 나머지가 1이 되도록 하는 가장 작은 자연수 x를 반환하는 함수를 반환하는 함수를 완성하세요.
 - i = 2; i < n; i++ 만큼 반복하여 n % i == 1 일 때 i값을 반환하여 해결하였습니다
 > [콜라츠 추측](https://school.programmers.co.kr/learn/courses/30/lessons/12943)
 - 콜라츠 추측 : 주어진 수가 짝수일 때 나누기 2 홀수일 때 3을 곱하고 1을 더하는 것을 반복하면 모든 수를 1로 만들 수 있다.
 - 문제 : 주어진 수 n 을 1로 만드려면 콜라츠 추측을 몇 번 반복해야 하는지 반환하는 함수를 완성하세요.
 - while문을 통해 n 이 1이 될 때까지 반복하며 숫자를 세어 해결하였습니다.

# 22-09-22
 > [두 정수 사이의 합](https://school.programmers.co.kr/learn/courses/30/lessons/12912)
 - 문제 : 두 정수 a, b가 주어졌을 때 a와 b 사이에 속한 모든 정수의 합을 반환하는 함수를 완성하세요.
 - a와 b의 대소를 구분한 후 큰 수에서 작은 수까지 반복하며 더하여 해결하였습니다.
 > [서울에서 김서방 찾기](https://school.programmers.co.kr/learn/courses/30/lessons/12919)
 - 문제 : String형 배열 seoul의 element중 "Kim"의 위치 x를 찾아, "김서방은 x에 있다"는 String을 반환하는 함수를 완성하세요.
 - 반복문을 활용하여 해결하였습니다.

# 22-09-25
 > [핸드폰 번호 가리기](https://school.programmers.co.kr/learn/courses/30/lessons/12948)
 - 문제 : 입력받은 문자열 형태의 전화번호의 뒷자리를 제외한 나머지 숫자를 전부 '*'으로 가린 문자열을 반환하는 함수를 완성하세요.
 - 반환값에 (문자열의 길이 - 4)만큼 반복하여 '*'을 추가하였고 입력받은 전화번호의 뒷 4자리를 추가하여 해결하였습니다.
 > [나누어 떨어지는 숫자 배열](https://school.programmers.co.kr/learn/courses/30/lessons/12910)
 - 문제 : array의 각 element 중 divisor로 나누어 떨어지는 값을 오름차순으로 정렬한 배열을, divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환하는 함수를 완성하세요
 - 범위기반 포문과 sort 함수를 사용하여 해결하였습니다.
 > [제일 작은 수 제거하기](https://school.programmers.co.kr/learn/courses/30/lessons/12935)
 - 문제 : 정수를 저장한 배열, arr 에서 가장 작은 수를 제거한 배열을 반환, 반환하려는 배열이 비어있을 경우 -1을 채워 반환하는 함수를 완성하세요.
 - 가장 작은 값을 배열에서 제거한 후 반환하여 해결하였습니다.