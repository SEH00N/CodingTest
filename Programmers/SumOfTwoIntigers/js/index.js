function solution(a, b) {
    var answer = 0;
    let bigger;
    let lower; 
    if(a >= b)
    {
        bigger = a;
        lower = b;
    }
    else
    {
        bigger = b;
        lower = a;
    }

    console.log(lower + " " + bigger);

    for(let i = lower; i <= bigger; i++)
        answer += i;

    return answer;
}

console.log(solution(5, 3));