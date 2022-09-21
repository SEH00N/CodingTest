function solution(n) {
    var answer = [];

    answer = n.toString().split('');

    for(let i = 0 ; i < answer.length / 2; i++)
    {
        var front = parseInt(answer[i]);
        var back = parseInt(answer[answer.length - i - 1]);
        answer[i] = back;
        answer[answer.length - i - 1] = front;
    }

    return answer;
}

console.log(solution(123213123));