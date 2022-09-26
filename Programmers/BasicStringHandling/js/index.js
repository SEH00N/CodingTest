function solution(s) {
    var answer = s.length == 4 || s.length == 6;// && !isNaN(Number(s));
    if(!answer)
        return answer;

    for(let i = 0; i < s.length; i++)
        answer &&= !isNaN(s[i]);

    return answer;
}

console.log(solution("13e1"));