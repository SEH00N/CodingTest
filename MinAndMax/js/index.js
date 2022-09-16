solution = function(s) {
    var answer = s.split(' ');
    var arr = s.split(' ');

    arr.sort(function(a, b){
        return a - b;
    });

    answer = `${arr[0]} ${arr[arr.length - 1]}`;

    return answer;
}

console.log(solution("-1 -2 -3 -4"));