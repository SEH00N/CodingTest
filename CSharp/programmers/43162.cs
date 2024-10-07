namespace CSharp.Programmers;

// 네트워크
class Solution43162
{
    // static void Main(string[] args)
    // {
    //     Solution43162 solution = new Solution43162();

    //     Console.WriteLine(solution.Solution(3, new int[,] {
    //         { 1, 1, 0 },
    //         { 1, 1, 0 },
    //         { 0, 0, 1 }
    //     }));

    //     Console.WriteLine("");

    //     Console.WriteLine(solution.Solution(3, new int[,] {
    //         { 1, 1, 0 },
    //         { 1, 1, 1 },
    //         { 0, 1, 1 }
    //     }));
    // }

    public int Solution(int n, int[,] computers)
    {
        int networks = 0;
        bool[] visited = new bool[n];
        
        for(int i = 0; i < n; ++i)
        {
            if(visited[i] == false)
            {
                networks++;
                NetworkSearch(i, n, computers, visited);
            }
        }

        return networks;
    }

    private void NetworkSearch(int root, int length, int[,] computers, bool[] visited)
    {
        for(int i = 0; i < length; ++i)
        {
            int connection = computers[root, i];
            if(connection == 0)
                continue;

            if(visited[i])
                continue;
                
            visited[i] = true;
            NetworkSearch(i, length, computers, visited);
        }
    }
}