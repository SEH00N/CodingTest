def solution(n):
    answer = []
    
    answer = list(str(n))
    
    i = 0
    while i < len(answer) / 2 :
        front = int(answer[i])
        back = int(answer[len(answer) - i - 1])
        answer[i] = back
        answer[len(answer) - i - 1] = front
        i += 1
    
    return answer

print(solution(123123))