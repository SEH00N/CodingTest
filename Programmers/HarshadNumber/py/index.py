import math

def solution(x):
    answer = True
    calValue : int = x
    compareValue = 0
    
    i = 0
    while i < len(str(x)) :
        compareValue += calValue % 10
        calValue = math.floor(calValue / 10)
        i += 1
    
    answer = x % compareValue == 0
    
    print(compareValue)
    
    return answer

print(solution(12))