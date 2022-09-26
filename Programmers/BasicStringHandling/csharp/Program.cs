using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution("12e2"));
        }

        public class Solution
        {
            public bool solution(string s)
            {
                bool answer = s.Length == 4 | s.Length == 6;
                if (!answer) return false;

                foreach (char x in s)
                {
                    answer &= int.TryParse(x.ToString(), out int temp);
                    if(!answer) return false;
                }

                return answer;
            }
        }
    }
}
