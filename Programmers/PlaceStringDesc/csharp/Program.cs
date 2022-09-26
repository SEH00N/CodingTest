using System;
using System.Collections.Generic;
using System.Linq;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            Console.WriteLine(s.solution("bcAd"));
        }

        public class Solution
        {
            public string solution(string s)
            {
                List<char> chars = s.ToCharArray().ToList();
                chars.Sort();
                chars.Reverse();

                return String.Join("", chars);
            }
        }
    }
}
