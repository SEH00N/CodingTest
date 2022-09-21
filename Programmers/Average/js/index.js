function solution(arr) {
    var answer = 0;
    arr.forEach(item => {
        answer += item;
    });

    answer /= arr.length;

    return answer;
}

console.log(solution([1, 2, 3, 4]));