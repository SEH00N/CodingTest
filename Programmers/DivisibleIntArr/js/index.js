function solution(arr, divisor) {
    var answer = [];

    arr.forEach(item => {
        if(item % divisor == 0)
            answer.push(item);
    });

    if(answer.length == 0)
    {
        answer.push(-1)
        return answer;
    }

    answer.sort((a, b) => {
        return a - b;
    });

    return answer;
}

console.log(solution([1, 2, 3, 4], 10));