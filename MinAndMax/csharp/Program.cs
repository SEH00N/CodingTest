using System;
using System.Collections.Generic;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution("-1 -2 -3 -4"));
        }

        public class Solution
        {
            public string solution(string s)
            {
                string answer = "";

                List<int> list = new List<int>();
                string[] arr = s.Split(' ');

                foreach (string i in arr)
                    list.Add(int.Parse(i));

                list.Sort();

                answer = list[0] + " " + list[list.Count - 1];

                return answer;
            }
        }
    }
}
