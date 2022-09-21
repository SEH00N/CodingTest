function solution(n) {
    var answer = 0;
    let arr = []

    for(let i = 0; n > 0; i++)
    {
        arr.push(n % 10);
        n = Math.floor(n / 10);
    }

    arr.sort((a, b) => {
        return b - a;
    });

    console.log(arr);

    for(let i = 0; i < arr.length; i++)
        answer += arr[i] * Math.pow(10, arr.length - i - 1);

    return answer;
}

console.log(solution(118372));