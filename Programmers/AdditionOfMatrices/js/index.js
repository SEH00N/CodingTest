function solution(arr1, arr2) {
    var answer = [];

    for(let i = 0; i < arr1.length; i ++)
    {
        tempArr = [];
        arr1[i].forEach((item, index) => tempArr.push(item + arr2[i][index]) );
        
        answer.push(tempArr);
    }
 
    return answer;
}

console.log(solution([[1, 2], [2, 3]], [[3, 4], [5, 6]]));