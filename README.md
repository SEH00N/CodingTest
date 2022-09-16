# CodingTest
Record of my coding test

# 22-09-15
 - 짝수와 홀수 https://school.programmers.co.kr/learn/courses/30/lessons/12937
     - 문제 : 정수 num이 짝수일 때 "Even" 홀수일 때 "Odd"를 반환하는 함수를 완성하세요.
     - 삼항연산자를 활용하여 짝수, 홀수를 구분하였습니다.
 - JadonCase https://school.programmers.co.kr/learn/courses/30/lessons/12951
     - 문제 : 문자열 s가 주어졌을 때, s를 JadenCase로 바꾼 문자열을 리턴하는 함수를 완성하세요.
     - js - String.replaceAt(index, value)라는 Prototype 문자열의 index위치의 문자를 value로 바꿔 반환하는 메소드를 만들어 띄어쓰기 뒤에 있는 문자를 대문자로 바꿔 해결하였습니다.
     - py, charp - replaceAt(input, index, value)라는 문자열 input의 index위치의 문자를 value로 바꿔 반환하는 메소드를 만들어 띄어쓰기 뒤에 있는 문자를 대문자로 바꿔 해결하였습니다.
     - cpp - void replace(char& target, char value)라는 메소드를 만들어 띄어쓰기 다음 위치에 오는 문자를 참조하여 대문자로 바꿔 해결하였습니다.

# 22-09-16
 - 최댓값과 최솟값 https://school.programmers.co.kr/learn/courses/30/lessons/12939
     - 문제 : str에 나타나는 숫자 중 최소값과 최대값을 찾아 이를 "(최소값) (최대값)"형태의 문자열을 반환하는 함수를 완성하세요.
     - js, py - 띄어쓰기를 기준으로 split메소드를 사용하여 배열에 담아 sort메소드로 정렬하여 해결하였습니다.
     - csharp - 띄어쓰기를 기준으로 split메소드를 사용하여 List에 담아 sort메소드로 정렬하여 해결하였습니다.
     - cpp - stringstream을 사용하여 vector에 담아 sort메소드로 정렬하여 해결하였습니다.

# 22-09-17
 - 이진 변환 반복하기 https://school.programmers.co.kr/learn/courses/30/lessons/70129
    - 0과 1로 이루어진 문자열 x에 대한 이진 변환의 정의 : x의 모든 0을 제거, x의 길이를 c라고 하면 x = "c를 2진법으로 표현한 문자열"
    - 문제 : 0과 1로 이루어진 문자열 s가 "1"이 될 때까지 이진 변환을 가했을 때 이진 변환 횟수와 변환 과정에서 제거된 0의 개수를 배열에 담아 반환하는 함수를 완성하세요.
    - js - replaceAll 함수 통해 0을 모두 지운 후 toString(2)를 통해 2진수로 바꾸는 과정을 반복하여 해결하였습니다.
    - py - replace 함수 통해 0을 모두 지운 후 bin 함수를 활용하여 2진수로 바꾼 후 replace를 통해 0b(2진수 표현 형식)를 지우는 과정을 반복하여 해결하였습니다. 
    - cpp - removeAll(string input, char target)라는 input의 target을 모두 지운 문자열을 반환하는 메소드와 toBinary(int input)라는 input의 2진수 값을 반환하는 메소드를 만들어 해결하였습니다.
