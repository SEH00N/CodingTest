def solution(n):
    answer = 0
    stringValue = str(n)
    
    for x in stringValue :
        answer += int(x)

    return answer

print(solution(123))