/**
 * 
 * @param {number} num 
 * @returns 
 */
const solution = num => {
    var answer = '';

    answer = num % 2 == 0 ? 'Even' : 'Odd';

    return answer;
}

for(var i = 0; i < 10; i ++)
    console.log('Input Number : ' + i + ' | ' + solution(i));