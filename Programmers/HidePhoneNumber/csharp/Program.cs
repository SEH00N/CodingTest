using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();

            Console.WriteLine(s.solution("11001003333"));
        }

        public class Solution
        {
            public string solution(string phone_number)
            {
                string answer = "";
                int length = phone_number.Length;

                for (int i = 0; i < length - 4; i++)
                    answer += '*';

                answer += phone_number.Substring(length - 4);

                return answer;
            }
        }
    }
}
