using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution("console  dot write liNe "));
        }

        public class Solution
        {
            public string solution(string s)
            {
                string answer = s;

                answer = answer.ToLower();
                answer = replaceAt(answer, 0, Char.ToUpper(answer[0]));

                for(int i = 0; i < answer.Length; i++)
                    if(answer[i] == ' ' && i + 1 < answer.Length)
                        answer = replaceAt(answer, i + 1, Char.ToUpper(answer[i + 1]));

                return answer;
            }


            public string replaceAt(string source, int index, char value)
            {
                char[] arr = source.ToCharArray();

                arr[index] = value;

                return String.Join(null, arr);
            }
        }
    }
}
