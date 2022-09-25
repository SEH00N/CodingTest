using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution("HelloWorld!!"));
            Console.WriteLine(s.solution("HelloWorld!"));
        }

        public class Solution
        {
            public string solution(string s)
            {
                int l = s.Length;
                string answer = l % 2 == 0 ? s[l / 2 - 1].ToString() + s[l / 2].ToString() : s[l / 2].ToString();
                return answer;
            }
        }
    }
}
