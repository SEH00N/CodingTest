using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution(121));
        }

        public class Solution
        {
            public long solution(long n)
            {
                long answer = 0;
                double sqrt = Math.Sqrt(n);

                if (sqrt - Math.Floor(sqrt) == 0)
                    answer = (long)Math.Pow(sqrt + 1, 2);
                else
                    answer = -1;

                return answer;
            }
        }
    }
}
