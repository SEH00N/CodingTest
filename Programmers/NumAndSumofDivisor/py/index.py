def solution(left, right):
    answer = 0
    
    for x in range(left, right + 1):
        answer += x if len(getDivisors(x)) % 2 == 0 else -x
    
    return answer

def getDivisors(num):
    divisors = []
    
    for x in range(1, num + 1):
        if num % x == 0 :
            divisors.append(x)
    
    return divisors

print(solution(13, 17))