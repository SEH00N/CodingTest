#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

void DFS(int n, std::vector<std::vector<int>> graph, std::vector<bool>& visited)
{
	visited[n] = true;
	std::cout << n + 1 << ' ';

	for (int i = 0; i < graph[n].size(); ++i)
	{
		if (visited[graph[n][i]] == true)
			continue;

		DFS(graph[n][i], graph, visited);
	}
}

void BFS(int start, std::vector<std::vector<int>> graph, std::vector<bool>& visited)
{
	std::queue<int> reservations;
	reservations.push(start);
	visited[start] = true;

	while (reservations.empty() == false)
	{
		int now = reservations.front();
		reservations.pop();
		std::cout << now + 1 << ' ';

		for (int i = 0; i < graph[now].size(); ++i)
		{
			int next = graph[now][i];
			if (visited[next] == true)
				continue;

			reservations.push(next);
			visited[next] = true;
		}
	}
}

int main()
{
	int verticesCount, segmentCount, start;
	std::cin >> verticesCount >> segmentCount >> start;

	std::vector<std::vector<int>> graph;
	graph.resize(verticesCount, std::vector<int>());

	std::vector<bool> visited;
	visited.resize(verticesCount, false);

	for (int i = 0; i < segmentCount; ++i)
	{
		int from, to;
		std::cin >> from >> to;
		graph[from - 1].push_back(to - 1);
		graph[to - 1].push_back(from - 1);
	}

	for(int i = 0; i < verticesCount; ++i)
		sort(graph[i].begin(), graph[i].end());

	DFS(start - 1, graph, visited);

	std::cout << '\n';
	visited.clear();
	visited.resize(verticesCount, false);

	BFS(start - 1, graph, visited);

	return 0;
}