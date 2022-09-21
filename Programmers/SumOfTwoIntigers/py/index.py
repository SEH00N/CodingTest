def solution(a, b):
    answer = 0
    
    if a > b:
        temp = a
        a = b
        b = temp
    
    for x in range(a, b + 1):
        answer += x
    
    return answer

print(solution(5, 3))