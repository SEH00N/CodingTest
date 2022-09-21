function solution(s){
    var answer = false;

    let temp = 0;

    for(let i = 0; i < s.length; i ++)
    {
        if(s[i] == '(')
            temp ++;
        else
        {
            if(temp <= 0)
                return false;
            else
                temp --;
        }
    }

    answer = temp == 0;
    
    return answer;
}

console.log(solution("(()())()()"));