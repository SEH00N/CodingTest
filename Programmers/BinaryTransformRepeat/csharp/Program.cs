using System;   

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            int[] arr = s.solution("01110");
            Console.WriteLine(arr[0] + " " + arr[1]);
        }

        public class Solution
        {
            public int[] solution(string s)
            {
                int[] answer = new int[] { };
                List<int> temp = new List<int>();
                int repeatCount = 0;
                int deleteCount = 0;

                while(s.Length > 1)
                {
                    repeatCount++;
                    deleteCount += s.Replace("1", string.Empty).Length;

                    s = s.Replace("0", string.Empty);
                    s = Convert.ToString(s.Length, 2);
                }
                
                temp.Add(repeatCount);
                temp.Add(deleteCount);

                answer = temp.ToArray();

                return answer;
            }
        }
    }
}