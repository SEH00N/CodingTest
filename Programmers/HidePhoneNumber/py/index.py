def solution(phone_number):
    answer = ''
    length = len(phone_number)
    
    for x in range(0, length - 4) :
        answer += "*"
    
    answer += phone_number[length - 4 : length]
    
    return answer

print(solution("1231231111"))