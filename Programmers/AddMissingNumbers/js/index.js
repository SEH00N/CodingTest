function solution(numbers) {
    var answer = 0;
    
    for(let i = 0; i < numbers.length; i++)
        answer += numbers[i];
    
    return 45 - answer;
}

console.log(solution([1, 2, 3, 4, 5]));