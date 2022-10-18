using System;
using System.Collections.Generic;

namespace csharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Solution s = new Solution();

            int[,] result = s.solution(new int[,] { { 1 }, { 2 } }, new int[,] { { 3 }, { 4 } });

            foreach (int x in result)
                Console.Write(x + " ");
        }
    }
}


public class Solution
{
    public int[,] solution(int[,] arr1, int[,] arr2)
    {
        int[,] answer = new int[arr1.GetLength(0), arr1.GetLength(1)];

        for (int i = 0; i < arr1.GetLength(0); i++)
        {
            int[] tempArr = new int[arr1.GetLength(1)];

            for (int j = 0; j < arr1.GetLength(1); j++)
                answer[i, j] = arr1[i, j] + arr2[i, j];
        }

        return answer;
    }
}