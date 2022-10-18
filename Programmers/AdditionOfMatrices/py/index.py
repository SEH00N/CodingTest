def solution(arr1, arr2):
    answer = []
    length = len(arr1)
    
    for i in range(length):
        tempArr = []
        for j in range(len(arr1[i])):
            tempArr.insert(j, arr1[i][j] + arr2[i][j])
        answer.insert(i, tempArr)
    
    return answer

print(solution([[1, 2], [2, 3]], [[3, 4], [5, 6]]))