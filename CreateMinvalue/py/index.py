def solution(A,B):
    answer = 0

    A = list(A)
    B = list(B)
    A.sort()
    B.sort()
    
    while 0 < len(A) :
        answer += A.pop(0) * B.pop(len(B) - 1)
    
    return answer

print(solution([1, 4, 2], [5, 4, 4]))