function solution(num) {
    var answer = 0;
    
    while(num != 1)
    {
        if(answer == 500)
        {
            answer = -1;
            break;
        }
        
        num = num % 2 == 0 ? num / 2 : num * 3 + 1;
        answer ++;
    }
    
    return answer;
}

console.log(solution(10));