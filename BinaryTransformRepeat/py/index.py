def solution(s):
    answer = []
    repeatCount = 0
    deleteCount = 0
    
    while len(s) > 1:
        deleteCount += len(s.replace('1', ''))

        length = len(s.replace('0', ''))
        s = bin(length).replace('0b', '')
        
        print(s)

        repeatCount += 1
    
    answer.append(repeatCount)
    answer.append(deleteCount)
    
    return answer

print(solution('01110'))