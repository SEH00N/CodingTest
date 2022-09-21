def solution(n):
    answer = 0
    
    i = 2
    while i < n:
        if n % i == 1:
            answer = i
            break
        i += 1
    
    return answer

print(solution(10))