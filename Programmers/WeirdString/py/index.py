def solution(s):
    answer = ''
    
    for str in s.split(' ') :
        for index, str in enumerate(str):
            answer += str.upper() if index % 2 == 0 else str.lower()
            
        answer += " "
    
    return answer[ : -1 : ]