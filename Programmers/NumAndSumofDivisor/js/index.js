function solution(left, right) {
    var answer = 0;

    for(let i = left; i <= right; i++)
        answer += GetDivisors(i).length % 2 == 0 ? i : -i;

    return answer;
}

const GetDivisors = function(num) {
    divisors = [];

    for(let i = 1; i <= num; i++)
        if(num % i == 0)
            divisors.push(i);

    return divisors;
}

console.log(solution(13, 17));