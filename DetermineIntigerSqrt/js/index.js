function solution(n) {
    var answer = 0;
    let sqrt = Math.sqrt(n);

    if(sqrt - Math.floor(sqrt) == 0)
        answer = Math.pow(sqrt + 1, 2);
    else
        answer = -1;

    return answer;
}

console.log(solution(121));