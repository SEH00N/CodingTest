function solution(n) {
    var answer = '';
    answer = "수박".repeat(n + 1 / 2).substring(0, n);
    // if(n % 2 == 0)
    //     for(let i = 0; i < n / 2; i++)
    //         answer += "수박";
    // else
    // {
    //     for(let i = 0; i < (n - 1) / 2; i++)
    //         answer += "수박";
    //     answer += "수";
    // }

    return answer;
}

console.log(solution(4));