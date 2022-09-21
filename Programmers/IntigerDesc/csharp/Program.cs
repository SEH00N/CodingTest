using System;
using System.Collections.Generic;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();

            Console.WriteLine(s.solution(118372));
        }

        public class Solution
        {
            public long solution(long n)
            {
                long answer = 0;
                List<long> list = new List<long>();

                while(n > 0)
                {
                    list.Add(n % 10);
                    n /= 10;
                }

                list.Sort();
                list.Reverse();

                for(int i = 0; i < list.Count; i++)
                    answer += (long)(list[i] * Math.Pow(10, list.Count - i - 1));

                return answer;
            }
        }
    }
}
