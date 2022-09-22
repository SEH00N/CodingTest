using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            string[] arr = { "123", "Kim" };
            Console.WriteLine(s.solution(arr));
        }

        public class Solution
        {
            public string solution(string[] seoul)
            {
                string answer = "";

                for(int i = 0; i < seoul.Length; i++)
                    if(seoul[i] == "Kim")
                    {
                        answer = $"김서방은 {i}에 있다";
                        break;
                    }

                return answer;
            }
        }
    }
}
