def solution(num):
    answer = ''
    
    answer = 'Even' if num % 2 == 0 else 'Odd'
    
    return answer

i = 0

while i < 10:
    print('Input Number : {0} | {1}'.format(i, solution(i)))
    i += 1