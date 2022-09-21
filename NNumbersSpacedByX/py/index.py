def solution(x, n):
    answer = []
    
    i = 0
    while i < n:
        i += 1
        answer.append(i * x)
    
    return answer

for x in solution(4, 3) :
    print(x)