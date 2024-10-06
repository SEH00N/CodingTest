namespace CSharp.Programmers;

// 피로도
class Solution87946
{
    // static void Main(string[] args)
    // {
    //     Solution87946 solution = new Solution87946();

    //     Console.WriteLine(solution.Solution(80, new int[,] {
    //         { 80, 20 }, { 50, 40 }, { 30, 10 }
    //     }));
    // }

    public int Solution(int k, int[,] dungeons) 
    {
        int answer = 0;
        int length = dungeons.GetLength(0);
        bool[] visited = new bool[length];

        for(int i = 0; i < length; ++i)
        {
            visited[i] = true;
            k -= dungeons[i, 1];

            int temp = Search(k, length, visited, dungeons);
            if(temp > answer)
                answer = temp;

            visited[i] = false;
            k += dungeons[i, 1];
        }

        return answer;
    }

    // 0, 60, 3, [true, false, false]
    // 1, 20, 3, [true, true, false]
    // -> 1반환

    // 2, 50, 3, [true, false, true] -> 1 + 1 + 1반환
    // 1, 10, 3, [true, true, true] -> 1 + 1반환
    // -> 1반환

    private int Search(int k, int length, bool[] visited, int[,] dungeons)
    {
        int count = 0;

        for(int i = 0; i < length; ++i)
        {
            if(visited[i])
                continue;

            if(k < dungeons[i, 0])
                continue;

            visited[i] = true;
            k -= dungeons[i, 1];

            int temp = Search(k, length, visited, dungeons);
            if(temp > count)
                count = temp;

            visited[i] = false;
            k += dungeons[i, 1];
        }

        return ++count;
    }
}