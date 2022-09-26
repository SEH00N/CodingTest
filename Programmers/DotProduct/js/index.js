function solution(a, b) {
    var answer = 0;
    
    for(let i = 0; i < a.length; i++)
        answer += a[i] * b[i];

    return answer;
}

console.log(solution([1, 2, 3, 4, 4, 4, 4, 1, 2, 3, 4, 5, 6, 7], [-3, -1, 0, 2, 5, 6, 7, 1, 2, 4, 5, 6, 2, 1]));