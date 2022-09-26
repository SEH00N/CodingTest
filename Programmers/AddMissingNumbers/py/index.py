def solution(numbers):
    answer = 0
    
    for x in numbers :
        answer += x
    
    return 45 - answer

print(solution([1, 2, 3, 4, 5]))