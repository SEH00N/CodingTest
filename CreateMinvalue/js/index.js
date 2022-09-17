function solution(A,B){
    var answer = 0;

    A.sort(function(a, b) { return a - b; })

    B.sort(function(a, b) { return a - b; })

    while(A.length < 0)
        answer += A.shift() * B.pop(); 

    return answer;
}

arr1 = [1, 4, 2];
arr2 = [5, 4, 4];
console.log(solution(arr1, arr2));