#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int main()
{
	int cityCount, roadCount, destination, start;
	std::cin >> cityCount >> roadCount >> destination >> start;

	std::vector<std::vector<int>> roads;
	roads.resize(cityCount);

	std::vector<int> destinations;

	for (int i = 0; i < roadCount; ++i)
	{
		int from, to;
		std::cin >> from >> to;

		roads[from - 1].push_back(to - 1);
	}

	std::queue<int> reservations;
	std::vector<int> visited;
	visited.resize(cityCount, -1);

	reservations.push(start - 1);
	visited[start - 1] = 0;

	while (reservations.empty() == false)
	{
		int current = reservations.front();
		reservations.pop();

		for (int i = 0; i < roads[current].size(); ++i)
		{
			int next = roads[current][i];
			if (visited[next] != -1) // 이미 방문한 노드
				continue;

			reservations.push(next);
			visited[next] = visited[current] + 1;

			if (visited[next] == destination)
				destinations.push_back(next);
		}
	}

	if (destinations.size() <= 0)
		std::cout << -1;
	else
	{
		std::sort(destinations.begin(), destinations.end());
		for (auto iter = destinations.begin(); iter != destinations.end(); ++iter)
			std::cout << *iter + 1 << '\n';
	}

	return 0;
}