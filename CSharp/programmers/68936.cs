using System;
using System.Collections.Generic;

namespace CSharp.Programmers;

class Solution68936
{
    // static void Main(string[] args)
    // {
    //     Solution68936 solution = new Solution68936();

    //     {
    //         int[] answer = solution.Solution(new int[,] {
    //             { 1, 1, 0, 0 },
    //             { 1, 0, 0, 0 },
    //             { 1, 0, 0, 1 },
    //             { 1, 1, 1, 1 }
    //         });
    //         Console.WriteLine($"[{answer[0]}, {answer[1]}]");
    //     }

    //     {
    //         int[] answer = solution.Solution(new int[,] {
    //             { 1, 1, 1, 1, 1, 1, 1, 1 }, 
    //             { 0, 1, 1, 1, 1, 1, 1, 1 },
    //             { 0, 0, 0, 0, 1, 1, 1, 1 }, 
    //             { 0, 1, 0, 0, 1, 1, 1, 1 },
    //             { 0, 0, 0, 0, 0, 0, 1, 1 }, 
    //             { 0, 0, 0, 0, 0, 0, 0, 1 }, 
    //             { 0, 0, 0, 0, 1, 0, 0, 1 }, 
    //             { 0, 0, 0, 0, 1, 1, 1, 1 }
    //         });
    //         Console.WriteLine($"[{answer[0]}, {answer[1]}]");
    //     }

    //     {
    //         int[] answer = solution.Solution(new int[,] {
    //             { 1, 1, 1, 1 }, 
    //             { 1, 1, 1, 1 }, 
    //             { 1, 1, 1, 1 }, 
    //             { 1, 1, 1, 1 }
    //         });
    //         Console.WriteLine($"[{answer[0]}, {answer[1]}]");
    //     }
    // }

    public class Node
    {
        public int x;
        public int y;
        public int value;

        public Node(int x, int y, int value)
        {
            this.x = x;
            this.y = y;
            this.value = value;
        }
    }

    public int[] Solution(int[,] arr) {
        int[] answer = new int[2];
        List<Node> nodes = new List<Node>();

        int size = arr.GetLength(0);
        int value = arr[0, 0];

        if(QuadMatch(0, 0, value, size, arr))
        {
            answer[value]++;
            return answer;
        }

        QuadCompression(0, 0, size, arr, nodes);
        foreach(Node node in nodes)
            answer[node.value]++;

        return answer;
    }

    private void QuadCompression(int x, int y, int size, int[,] arr, List<Node> nodes)
    {
        if(size <= 1)
            return;

        size >>= 1;
        for (int i = 0; i < 4; ++i)
        {
            int startX = x + (size * (i % 2));
            int startY = y + (size * (i / 2));
            int value = arr[startY, startX];

            if(QuadMatch(startX, startY, value, size, arr))
                nodes.Add(new Node(startX, startY, value));
            else
                QuadCompression(startX, startY, size, arr, nodes);
        }
    }

    private bool QuadMatch(int x, int y, int value, int size, int[,] arr)
    {
        bool match = true;

        for (int currentY = y; currentY < y + size; ++currentY)
        {
            for (int currentX = x; currentX < x + size; ++currentX)
            {
                if (arr[currentY, currentX] != value)
                {
                    match = false;
                    break;
                }
            }

            if (match == false)
                break;
        }

        return match;
    }
}