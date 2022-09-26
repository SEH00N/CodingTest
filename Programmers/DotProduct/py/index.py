def solution(a, b):
    answer = 0
    
    for i, x in enumerate(a) :
        answer += x * b[i]
    
    return answer

print(solution([1, 2, 3, 4, 4, 4, 4, 1, 2, 3, 4, 5, 6, 7], [-3, -1, 0, 2, 5, 6, 7, 1, 2, 4, 5, 6, 2, 1]))