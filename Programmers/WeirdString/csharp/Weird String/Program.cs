using System;

namespace Weird_String
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = "try hello world!";
            Solution s = new Solution();
            Console.WriteLine(s.solution(input));
        }

        public class Solution
        {
            public string solution(string s)
            {
                string answer = "";
                string[] words = s.Split(' ');

                foreach (string str in words)
                {
                    string tempStr = "";

                    for (int i = 0; i < str.Length; i++)
                        tempStr += i % 2 == 0 ? str[i].ToString().ToUpper() : str[i].ToString().ToLower();

                    answer += tempStr + " ";
                }

                return answer.Remove(answer.Length - 1);
            }
        }
    }
}
