def tryParse(s):
    try:
        int(s)
        return True
    except ValueError:
        return False
        

def solution(s):
    answer = True if (len(s) == 4 or len(s) == 6) else False
    
    if answer == False :
        return answer
    
    for x in s :
        answer = answer and tryParse(x)
    
    return answer


print(solution("12e3"))