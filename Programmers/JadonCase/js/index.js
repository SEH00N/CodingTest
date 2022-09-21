const solution = (s) => {
    var answer = s.toLowerCase();

    answer = answer.replaceAt(0, answer[0].toUpperCase());

    for(var i = 0; i < answer.length; i++)
    {
        if(answer[i] == ' ' && i + 1 < answer.length)
            answer = answer.replaceAt(i + 1, answer[i + 1].toUpperCase());
    }

    return answer;
}

String.prototype.replaceAt = function(index, value) {
    if(index >= this.length) return this.valueOf();

    var arr = this.split('');
    arr[index] = value;

    return arr.join('');
}

console.log(solution("console  dot write line "));