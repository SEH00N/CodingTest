
using System;

namespace CSharp.Programmers;

// 삼각 달팽이
// dp로 풀어야 하나 머리를 꽁꽁싸매고 고민했지만
// 질문목록에 올라온 풀이들이 대부분 이차원 배열을 사용하길래 자세히 들여다 보니
// 정말 무식하게 달팽이를 그려서 풀어야 한다는 사실을 깨닫고 푼 문제
class Solution68645
{
    // static void Main(string[] args)
    // {
    //     Solution68645 solution = new Solution68645();

    //     {
    //         int[] answer = solution.Solution(4);
    //         Console.Write("[");
    //         for(int i = 0; i < answer.Length - 1; ++i)
    //             Console.Write($"{answer[i]}, ");
    //         Console.WriteLine($"{answer[^1]}]");
    //     }

    //     {
    //         int[] answer = solution.Solution(5);
    //         Console.Write("[");
    //         for(int i = 0; i < answer.Length - 1; ++i)
    //             Console.Write($"{answer[i]}, ");
    //         Console.WriteLine($"{answer[^1]}]");
    //     }

    //     {
    //         int[] answer = solution.Solution(6);
    //         Console.Write("[");
    //         for(int i = 0; i < answer.Length - 1; ++i)
    //             Console.Write($"{answer[i]}, ");
    //         Console.WriteLine($"{answer[^1]}]");
    //     }
    // }

    public int[] Solution(int n) 
    {
        int[,] snail = new int[n, n];
        int snailLength = (n * (n + 1)) >> 1; // 등차 합 공식 n(a + l) / 2 => 제 n항이 l일 때, 첫항 a부터 n번째 항 까지의 합

        int[] dirX = new int[] { 0, 1, -1 };
        int[] dirY = new int[] { 1, 0, -1 };

        int currentX = 0, currentY = 0;
        int count = n, counter = n - 1;
        int dir = 0;
        int dirLength = 3;

        for(int i = 0; i < snailLength; ++i, --counter)
        {
            snail[currentY, currentX] = i + 1;

            if(counter <= 0)
            {
                counter = --count;
                dir = (dir + 1) % dirLength;
            }

            currentX += dirX[dir];
            currentY += dirY[dir];
        }

        int[] answer = new int[snailLength];
        int index = 0;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < i + 1; ++j, ++index)
            {
                answer[index] = snail[i, j];
            }
        }

        #region 매 회전 i - 1
        // for(int i = n; i > 0; --i)
        // {
        //     for(int j = 0; j < i; ++ j)
        //     {

        //     }
        // }
        #endregion

        #region i (i - 1) i (i - 1) i (i - 1)
        // for(int i = 1; i <= n; ++i)
        // {
        //     System.Console.WriteLine(i);
        //     for(int j = 0; j < i - 1; ++j)
        //     {
        //         System.Console.WriteLine((n * 2) - (i - 2));
        //         // [4]          [5]             [6]
        //         // --           --              --
        //         // 09           12              15
        //         // 10 08        13 11           16 14
        //         // 05 06 07     14 15 10        17 21 13
        //         //              06 07 08 09     18 19 20 12
        //         //                              07 08 09 10 11
        //     }
        // }
        #endregion

        return answer;
    }
}