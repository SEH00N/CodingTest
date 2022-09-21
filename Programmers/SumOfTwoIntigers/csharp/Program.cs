using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();

            Console.WriteLine(s.solution(5, 3));
        }

        public class Solution
        {
            public long solution(int a, int b)
            {
                long answer = 0;

                if(a > b)
                {
                    int temp = a;
                    a = b;
                    b = temp;
                }

                for (int i = a; i <= b; i++)
                    answer += i;

                return answer;
            }
        }
    }
}
