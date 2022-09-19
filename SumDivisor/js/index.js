function solution(n) {
    var answer = 0;
    const root = Math.sqrt(n);

    for(let i = 1; i <= root; i++)
        if(n % i == 0)
        {
            answer += i;
            if(n / i != i)
                answer += n / i;
        }

    return answer;
}

for(let i = 0; i < 50; i++)
console.log(solution(i));