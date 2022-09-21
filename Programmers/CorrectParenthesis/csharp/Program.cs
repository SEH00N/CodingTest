using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            string temp = "";
            for (int i = 0; i < 50000; i++)
                temp += "(";
            for (int i = 0; i < 50000; i++)
                temp += ")";

            Console.WriteLine(s.solution(temp));
        }

        public class Solution
        {
            public bool solution(string s)
            {
                bool answer = true;
                int temp = 0;

                foreach (char x in s)
                    if (x == '(')
                        temp++;
                    else
                        if (temp <= 0)
                            return false;
                        else
                            temp--;

                answer = temp == 0;

                return answer;
            }
        }
    }
}
