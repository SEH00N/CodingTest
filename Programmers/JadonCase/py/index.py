def solution(s):
    answer = ''
    temp : str = s
    
    temp = temp.lower()
    temp = replaceAt(temp, 0, temp[0].capitalize())
    
    for index, char in enumerate(temp):
        if char == ' ':
            if index + 1 < len(temp):
                temp = replaceAt(temp, index + 1, temp[index + 1].capitalize())

    answer = temp
    
    return answer

def replaceAt(input, index, value):
    returnValue : str = ''
    arr = list(input)

    arr[index] = value
    
    for x in arr:
        returnValue += x
        
    return returnValue

print(solution("console  dot write line "))