#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int cityCnt, roadCnt, destination, start;
	std::cin >> cityCnt >> roadCnt >> destination >> start;

	std::vector <std::vector<int>> roads;
	roads.resize(cityCnt, std::vector<int>());

	for (int i = 0; i < roadCnt; ++i)
	{
		int from, to;
		std::cin >> from >> to;
		roads[from - 1].push_back(to - 1);
	}

	std::queue<int> reservation;
	std::vector<int> visited;
	visited.resize(cityCnt, -1);

	std::vector<int> answer;

	reservation.push(start - 1);
	visited[start - 1] = 0;

	while (reservation.empty() == false)
	{
		int now = reservation.front();
		reservation.pop();

		for (int i = 0; i < roads[now].size(); ++i)
		{
			int next = roads[now][i];

			if (visited[next] != -1)
				continue;

			reservation.push(next);
			visited[next] = visited[now] + 1;

			if (visited[next] == destination)
				answer.push_back(next);
		}
	}

	if (answer.size() > 0)
	{
		std::sort(answer.begin(), answer.end());
		for (auto iter = answer.begin(); iter != answer.end(); iter++)
			std::cout << *iter + 1 << '\n';
	}
	else
	{
		std::cout << -1;
	}
	
	return 0;
}
















//{
	//int cityCount, roadCount, destination, start;
	//std::cin >> cityCount >> roadCount >> destination >> start;

	//std::vector<std::vector<int>> roads;
	//roads.resize(cityCount);

	//std::vector<int> destinations;

	//for (int i = 0; i < roadCount; ++i)
	//{
	//	int from, to;
	//	std::cin >> from >> to;

	//	roads[from - 1].push_back(to - 1);
	//}

	//std::queue<int> reservations;
	//std::vector<int> visited;
	//visited.resize(cityCount, -1);

	//reservations.push(start - 1);
	//visited[start - 1] = 0;

	//while (reservations.empty() == false)
	//{
	//	int current = reservations.front();
	//	reservations.pop();

	//	for (int i = 0; i < roads[current].size(); ++i)
	//	{
	//		int next = roads[current][i];
	//		if (visited[next] != -1) // 이미 방문한 노드
	//			continue;

	//		reservations.push(next);
	//		visited[next] = visited[current] + 1;

	//		if (visited[next] == destination)
	//			destinations.push_back(next);
	//	}
	//}

	//if (destinations.size() <= 0)
	//	std::cout << -1;
	//else
	//{
	//	std::sort(destinations.begin(), destinations.end());
	//	for (auto iter = destinations.begin(); iter != destinations.end(); ++iter)
	//		std::cout << *iter + 1 << '\n';
	//}
//}