namespace CSharp.Programmers;

class Solution1844
{
    public int Solution(int[,] maps)
    {
        int targetY = maps.GetLength(0) - 1; // Array.GetLength(0) => row count
        int targetX = maps.GetLength(1) - 1; // Array.GetLength(1) => column count

        int[,] costs = new int[targetY + 1, targetX + 1];
        int[,] directions = new int[,] { { 1, 0 }, { 0, 1 }, { -1, 0 }, { 0, -1 } }; // clockwise directions

        Queue<int[]> queue = new Queue<int[]>();
        queue.Enqueue(new int[] { 0, 0 });
        costs[0, 0] = 1;

        while(queue.Count > 0)
        {
            int x = queue.Peek()[0];
            int y = queue.Peek()[1];

            queue.Dequeue();

            int cost = costs[y, x] + 1;

            for(int i = 0; i < 4; ++i)
            {
                int nextX = x + directions[i, 0];
                int nextY = y + directions[i, 1];

                if(nextX < 0 || nextX > targetX)
                    continue;

                if(nextY < 0 || nextY > targetY)
                    continue;

                if(maps[nextY, nextX] != 1)
                    continue;

                // 갈림길을 만난 후 한 지점에서 다시 만나는 경우 둘 중 더 빠른 경로로 costs를 덮어씌워야 하지 않는가? 라는 의문이 있었음
                // 그렇게 될 경우 이후에 연속되는 모든 경로의 길을 새로 방문해야 하기에 효율성 문제를 통과하지 못함

                // 하지만 좀 더 고민해보니 BFS 특성상 어차피 더 짧은 경로의 길이 먼저 방문하게 됨으로 코스트 비교를 할 필요가 없다는 것을 깨달음
                // 따라서 아래 조건은 불필요한 조건임을 알았다

                // if((costs[nextY, nextX] != 0) && (costs[nextY, nextX] < cost))
                //     continue;

                if(costs[nextY, nextX] != 0)
                    continue;

                costs[nextY, nextX] = cost;
                queue.Enqueue(new int[] { nextX, nextY });
            }
        }

        int answer = costs[targetY, targetX];
        if(answer != 0)
            return answer;
        else
            return -1;
    }
}