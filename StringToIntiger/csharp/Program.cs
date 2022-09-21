using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution("10"));
        }

        public class Solution
        {
            public int solution(string s)
            {
                int answer = int.Parse(s);
                return answer;
            }
        }
    }
}
