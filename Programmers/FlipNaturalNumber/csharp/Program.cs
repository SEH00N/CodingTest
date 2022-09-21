using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            foreach(int a in s.solution(99999999))
                Console.WriteLine(a);
        }

        public class Solution
        {
            public int[] solution(long n)
            {
                string stringValue = n.ToString();
                string[] chars = new string[stringValue.Length];
                int[] answer = new int[stringValue.Length];

                for (int i = 0; i < stringValue.Length; i++)
                    chars[i] = stringValue[i].ToString();

                for(int i = 0; i < chars.Length; i++)
                    answer[i] = int.Parse(chars[chars.Length - i - 1]);

                return answer;
            }
        }
    }
}
