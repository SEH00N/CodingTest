using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution(12));
        }

        public class Solution
        {
            public int solution(int n)
            {
                int answer = 0;
                double root = Math.Sqrt(n);

                for(int i = 1; i <= root; i++)
                    if(n % i == 0)
                    {
                        answer += i;
                        if (n / i != i)
                            answer += n / i;
                    }

                return answer;
            }
        }
    }
}
