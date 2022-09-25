using System;
using System.Linq;
using System.Collections.Generic;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();
            
            foreach(var a in s.solution(new int[] { 1, 2, 3, -1 }))
                Console.WriteLine(a);
        }

        public class Solution
        {
            public int[] solution(int[] arr)
            {
                List<int> list = arr.ToList();

                list.Remove(arr.Min());

                return list.Count <= 0 ? new int[] { -1 } : list.ToArray();
            }
        }
    }
}
