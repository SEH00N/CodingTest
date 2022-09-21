function solution(operations) {
    var answer = [];
    let queue = new MyQueue();

    operations.forEach(item => {
        switch(item)
        {
            case 'D 1':
                queue.pop();
                break;
            case 'D -1':
                queue.dequeue();
                break;
            default :
                queue.enqueue(parseInt(item.split(' ')[1]));
                break;
        }
    });

    if(queue.arr.length <= 0)
    {
        answer.push(0, 0);
    }
    else
    {
        answer.push(queue.sort()[queue.arr.length - 1], queue.sort()[0]);
    }

    return answer;
}

class MyQueue
{
    arr = [];
    
    sort()
    {
        this.arr.sort(function(a, b){
            return a - b;
        });

        return this.arr;
    }

    enqueue(value)
    {
        this.arr.push(value);
    }

    /**
     * 큰 값 빼기
     * @returns 
     */
    pop() 
    {
        if(this.arr.length <= 0) return;

        this.arr.sort(function(a, b){
            return a - b;
        });

        return this.arr.pop();
    }

    /**
     * 작은 값 빼기
     * @returns 
     */
    dequeue()
    {
        if(this.arr.length <= 0) return;

        this.arr.sort(function(a, b){
            return a - b;
        });

        return this.arr.shift();
    }
}

let start = new Date();

console.log(solution(["I -45", "I 653", "D 1", "I -642", "I 45", "I 97", "D 1", "D -1", "I 333"]));

let end = new Date();

console.log(end - start);