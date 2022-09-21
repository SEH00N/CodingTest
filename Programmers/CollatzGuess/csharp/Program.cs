using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();

            Console.WriteLine(s.solution(10));
        }

        public class Solution
        {
            public int solution(int num)
            {
                int answer = 0;
                long temp = num;

                while (temp != 1)
                {
                    if (answer == 500)
                    {
                        answer = -1;
                        break;
                    }

                    temp = temp % 2 == 0 ? temp / 2 : temp * 3 + 1;
                    answer++;
                }

                return answer;
            }
        }
    }
}
