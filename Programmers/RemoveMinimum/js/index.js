function solution(arr) {
    const minValue = Math.min(...arr);

    arr = arr.filter(i => i != minValue);

    return arr.length <= 1 ? [-1] : arr;
}

console.log(solution([-1, -1, 1, -1]))