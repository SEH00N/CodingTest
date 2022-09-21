import math

def solution(n):
    answer = 0
    sqrt = math.sqrt(n)
    
    if sqrt - math.floor(sqrt) == 0 :
        answer = math.pow(sqrt + 1, 2)
    else :
        answer = -1
    
    return answer