import math

def solution(n):
    answer = 0
    arr = []

    while n > 0 :
        arr.append(n % 10)
        n = math.floor(n / 10)
        
    arr.sort(reverse = True)
    
    i = 0
    length = len(arr)
    while i < length:
        answer += arr[i] * math.pow(10, length - i - 1)
        i += 1

    return answer

print(solution(118372))