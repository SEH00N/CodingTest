def solution(s):
    answer = True
    temp = 0
    
    for i in s :
        if i == '(':
            temp += 1
            
        else : 
            if temp <= 0 :
                return False
            else :
                temp -= 1
    
    answer = temp == 0

    return answer

print(solution("()()()"))
