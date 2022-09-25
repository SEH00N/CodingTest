import math

def solution(s):
    length = len(s)
    
    answer = s[math.floor(length / 2)] if length % 2 != 0 else s[int(length / 2 - 1)] + s[int(length / 2)]
    return answer

print(solution("HelloWorld!a"))