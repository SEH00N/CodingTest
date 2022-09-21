def solution(operations):
    answer = []
    queue = MyQueue()
    
    for x in operations :
        if x == 'D 1':
            queue.pop()
        elif x == 'D -1':
            queue.dequeue()
        else :
            queue.enqueue(int(x.split(' ')[1]))

    if len(queue.l) <= 0 :
        answer.append(0)
        answer.append(0)
    else :
        answer.append(queue.sort()[len(queue.l) - 1])
        answer.append(queue.sort()[0])

    return answer

class MyQueue:
    l = list()
        
    def enqueue(self, value):
        self.l.append(value)
        
    def dequeue(self):
        if len(self.l) <= 0 : 
            return
        self.l.sort()
        return self.l.pop(0)
    
    def pop(self):
        if len(self.l) <= 0 : 
            return
        
        self.l.sort()
        return self.l.pop()
    
    def sort(self):
        self.l.sort()
        return self.l

queue = MyQueue()
print(solution(["I -45", "I 653", "D 1", "I -642", "I 45", "I 97", "D 1", "D -1", "I 333"]))