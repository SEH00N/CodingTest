using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution(3));
        }

        public class Solution
        {
            public string solution(int n)
            {
                string answer = "";//.Repeat((n + 1) / 2).Substring(0, n);
                for (int i = 0; i < (n + 1) / 2; i++)
                    answer += "수박";

                return answer.Substring(0, n);
            }
        }
    }
}
