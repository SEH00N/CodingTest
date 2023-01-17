function solution(s) {
    var answer = '';
    
    s.split(' ').forEach(str => {
        for(var i = 0; i < str.length; i ++)
        {
            answer += i % 2 == 0 ? str[i].toUpperCase() : str[i].toLowerCase();     
        }
        
        answer += ' ';
    });
    
    return answer.slice(0, answer.length - 1);
}

console.log(solution("try hello, world!"));