using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();

            Console.WriteLine(s.solution(123123));
        }

        public class Solution
        {
            public int solution(int n)
            {
                int answer = 0;
                string stringValue = n.ToString();

                foreach (char c in stringValue)
                    answer += int.Parse(c.ToString());

                return answer;
            }
        }
    }
}
