using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();

            Console.WriteLine(s.solution(new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }));
        }

        public class Solution
        {
            public int solution(int[] a, int[] b)
            {
                int answer = 0;

                for(int i = 0; i < a.Length; i++)
                    answer += a[i] * b[i];

                return answer;
            }
        }
    }
}
