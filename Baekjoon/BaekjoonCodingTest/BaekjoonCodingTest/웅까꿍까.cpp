#include <iostream>

#include <vector>
#include <queue>

void DFS(int n, int now, std::vector<std::vector<int>> computers, std::vector<bool>& visited)
{
	visited[now] = true;

	for (int i = 0; i < n; ++i)
	{
		if (computers[now][i] == 0)
			continue;

		if (visited[i] == true)
			continue;

		DFS(n, i, computers, visited);
	}
}

int solution(int n, std::vector<std::vector<int>> computers) {
	int answer = 0;

	std::vector<bool> visited;
	visited.resize(n, false);

	for (int i = 0; i < n; ++i)
	{
		if (visited[i] == true)
			continue;

		++answer;
		DFS(n, i, computers, visited);
	}

	return answer;
}

//int solution(int n, std::vector<std::vector<int>> computers) {
//    int answer = 0;
//
//    std::vector<bool> visited;
//    visited.resize(n, false);
//
//    for (int i = 0; i < n; ++i)
//    {
//        if (visited[i] == true)
//            continue;
//
//        ++answer;
//
//        std::queue<int> reservation;
//        reservation.push(i);
//        visited[i] = true;
//
//        while (reservation.empty() == false)
//        {
//            int now = reservation.front();
//            reservation.pop();
//
//            for (int j = 0; j < n; ++j)
//            {
//                if (computers[now][j] == 0)
//                    continue;
//
//                if (visited[j] == true)
//                    continue;
//
//                reservation.push(j);
//                visited[j] = true;
//            }
//        }
//    }
//
//    return answer;
//}

int main()
{
	//std::cout << solution(3, { { 1, 1, 0 }, { 1, 1, 0 }, { 0, 0, 1 } });
	std::cout << solution(3, { { 1, 1, 0 }, { 1, 1, 1 }, { 0, 1, 1 } });
    return 0;
}