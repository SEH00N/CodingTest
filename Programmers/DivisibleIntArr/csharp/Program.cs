using System;
using System.Collections.Generic;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();

            foreach (int i in s.solution(new int[] { 1, 2, 3, 4 }, 2))
                Console.WriteLine(i);
        }

        public class Solution
        {
            public int[] solution(int[] arr, int divisor)
            {
                List<int> answer = new List<int>();

                foreach (int i in arr)
                    if (i % divisor == 0)
                        answer.Add(i);

                if(answer.Count == 0)
                {
                    answer.Add(-1);
                    return answer.ToArray();
                }

                answer.Sort();

                return answer.ToArray();
            }
        }
    }
}
