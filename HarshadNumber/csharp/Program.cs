using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution(12));
        }

        public class Solution
        {
            public bool solution(int x)
            {
                bool answer = true;
                int calVal = x;
                int compareVal = 0;

                for(int i = 0; i < x.ToString().Length; i++)
                {
                    compareVal += calVal % 10;
                    calVal /= 10;
                }

                answer = x % compareVal == 0;

                return answer;
            }
        }
    }
}
