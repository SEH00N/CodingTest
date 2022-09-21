def solution(arr):
    answer = 0
    
    for item in arr :
        answer += item
    
    answer /= len(arr)
    
    return answer

print(solution([1, 2, 3, 4]))