def solution(s):
    answer = ''
    arr = list(map(int, s.split()))
    arr.sort()

    answer = f"{arr[0]} {arr[len(arr) - 1]}"
    print(arr)
    
    return answer

print(solution("-1 -23 -30 -4 10 3"))