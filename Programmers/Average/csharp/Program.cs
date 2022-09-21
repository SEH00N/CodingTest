using System;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            int[] arr = new int[] { 1, 2, 3, 4 };
            Console.WriteLine(s.solution(arr));
        }

        public class Solution
        {
            public double solution(int[] arr)
            {
                double answer = 0;

                foreach (int i in arr)
                    answer += i;

                answer /= arr.Length;

                return answer;
            }
        }
    }
}
