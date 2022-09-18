using System;
using System.Collections.Generic;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution solution = new Solution();
            string[] arr = new string[] { "I -45", "I 653", "D 1", "I -642", "I 45", "I 97", "D 1", "D -1", "I 333" };
            Console.WriteLine(solution.solution(arr)[0] + " " + solution.solution(arr)[1]);
        }

        public class Solution
        {
            public int[] solution(string[] operations)
            {
                int[] answer = new int[2];
                MyQueue<int> queue = new MyQueue<int>();

                foreach(var i in operations)
                {
                    switch(i)
                    {
                        case "D 1":
                            queue.Pop();
                            break;
                        case "D -1":
                            queue.Dequeue();
                            break;
                        default:
                            queue.Enqueue(int.Parse(i.Split(' ')[1]));
                            break;
                    }
                }

                if (queue.Sort().Count <= 0)
                {
                    answer[0] = 0;
                    answer[1] = 0;
                }
                else
                {
                    answer[0] = queue.Sort()[queue.Sort().Count - 1];
                    answer[1] = queue.Sort()[0];
                }

                return answer;
            }

            class MyQueue<T>
            {
                private List<T> list = new List<T>();

                public void Enqueue(T value)
                {
                    list.Add(value);
                }

                public T Dequeue()
                {
                    if (list.Count <= 0) return default(T);

                    list.Sort();
                    T returnValue = list[0];
                    list.RemoveAt(0);

                    return returnValue;
                }

                public T Pop()
                {
                    if(list.Count <= 0) return default(T);

                    list.Sort();
                    T returnValue = list[list.Count - 1];
                    list.RemoveAt(list.Count - 1);

                    return returnValue;
                }

                public List<T> Sort()
                {
                    list.Sort();
                    return list;
                }
            }
        }
    }
}
