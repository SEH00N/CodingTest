import math

def solution(n):
    answer = 0
    root = math.sqrt(n)

    i = 1
    while i <= root:
        if n % i == 0:
            answer += i
            if n / i != i :
                answer += n / i
        i += 1
                
    return answer

print(solution(10))