using System;
using CSharp.Programmers;

namespace CSharp;

class Program
{
    static void Main(string[] args)
    {
        Solution1844 solution = new Solution1844();
        
        Console.WriteLine(solution.Solution(new int[,] {
            { 1, 0, 1, 1, 1 }, 
            { 1, 0, 1, 0, 1 }, 
            { 1, 0, 1, 1, 1 }, 
            { 1, 1, 1, 0, 1 }, 
            { 0, 0, 0, 0, 1 }
        }));

        Console.WriteLine("");

        Console.WriteLine(solution.Solution(new int[,] {
            { 1, 0, 1, 1, 1 },
            { 1, 0, 1, 0, 1 },
            { 1, 0, 1, 1, 1 },
            { 1, 1, 1, 0, 0 },
            { 0, 0, 0, 0, 1 }
        }));

        Console.WriteLine("");

        Console.WriteLine(solution.Solution(new int[,] {
            { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
            { 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1 },
            { 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1 },//19
            { 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1 },//22
            { 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1 },//23
            { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1 } //24
        }));
    }
}
