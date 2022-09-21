using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            long[] temp = s.solution(4, 3);
            foreach(long i in temp)
                Console.WriteLine(i);
        }

        public class Solution
        {
            public long[] solution(int x, int n)
            {
                long[] answer = new long[n];

                for (long i = 1; i <= n; i++)
                    answer[i - 1] = i * x;

                return answer;
            }
        }
    }
}
