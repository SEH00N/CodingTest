def solution(seoul):
    answer = ''
    
    for index, x in enumerate(seoul):
        if x == 'Kim':
            answer = '김서방은 {}에 있다'.format(index)
            break
    
    return answer

print(solution(["as", "Kim"]))