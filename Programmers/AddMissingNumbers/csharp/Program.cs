using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();

            Console.WriteLine(s.solution(new int[] { 1, 2, 3, 4, 5 }));
        }

        public class Solution
        {
            public int solution(int[] numbers)
            {
                int answer = 0;

                foreach (var x in numbers)
                    answer += x;

                return 45 - answer;
            }
        }
    }
}
