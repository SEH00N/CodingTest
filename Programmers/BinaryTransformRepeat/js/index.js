function solution(s) {
    var answer = [];
    var deleteCount = 0;
    var repeatCount = 0;

    while(s.length > 1)
    {
        console.log(s);
        repeatCount ++;
        deleteCount += s.replaceAll('1', '').length;
        s = s.replaceAll('0', '');
        s = s.length.toString(2);
    }

    answer.push(repeatCount, deleteCount);

    return answer;
}

console.log(solution("10010100101"));