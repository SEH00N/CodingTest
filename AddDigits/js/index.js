function solution(n)
{
    var answer = 0;
    const stringValue = n.toString();

    for(let i = 1; i <= stringValue.length; i++)
        answer += parseInt(stringValue[stringValue.length - i]);

    return answer;
}

console.log(solution(123));