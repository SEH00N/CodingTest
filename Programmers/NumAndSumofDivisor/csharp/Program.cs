using System;
using System.Collections.Generic;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution(13, 17));
        }

        public class Solution
        {
            public int solution(int left, int right)
            {
                int answer = 0;

                for (int i = left; i <= right; i++)
                    answer += GetDivisors(i).Count % 2 == 0 ? i : -i;

                return answer;
            }

            public List<int> GetDivisors(int num)
            {
                List<int> divisors = new List<int>();

                for(int i = 1; i <= num; i++)
                    if(num % i == 0)
                        divisors.Add(i);

                return divisors;
            }
        }
    }
}
