def solution(arr):
    minValue = min(arr)
    
    arr.remove(minValue)
    
    return [-1] if len(arr) <= 1 else arr

print(solution([1, 2, -1]))