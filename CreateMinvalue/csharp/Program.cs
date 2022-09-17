using System;
using System.Collections.Generic;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            int[] arr1 = { 1, 4, 2 };
            int[] arr2 = { 5, 4, 4 };

            Console.WriteLine(s.solution(arr1, arr2));
        }

        public class Solution
        {
            public int solution(int[] A, int[] B)
            {
                int answer = 0;
                Array.Sort(A);
                Array.Sort(B);

                Queue<int> q = new Queue<int>(A);
                Stack<int> s = new Stack<int>(B);

                while (q.Count > 0)
                    answer += q.Dequeue() * s.Pop();

                return answer;
            }
        }
    }
}
