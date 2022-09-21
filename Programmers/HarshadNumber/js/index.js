function solution(x) {
    var answer = true;
    var calculationValue = x;
    var compareTarget = 0;

    for(let i = 0; i < x.toString().length; i++)
    {
        compareTarget += calculationValue % 10;
        calculationValue = Math.floor(calculationValue / 10);
    }

    answer = x % compareTarget == 0;

    return answer;
}

console.log(solution(10000));
console.log(solution(12));
console.log(solution(11));
console.log(solution(13));