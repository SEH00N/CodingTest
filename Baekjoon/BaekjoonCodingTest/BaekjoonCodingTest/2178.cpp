#include <iostream>
#include <queue>
#include <vector>

int main()
{
	int height, width;
	std::cin >> height >> width;

	std::vector<std::string> maze;
	maze.resize(height);

	for (int i = 0; i < height; ++i)
		std::cin >> maze[i];
	
	std::queue<std::pair<int, int>> reservation;
	std::vector<std::vector<int>> visited;
	visited.resize(height, std::vector<int>(width, -1));

	int dy[4] = { -1, 0, 1, 0 };
	int dx[4] = { 0, 1, 0, -1 };

	reservation.push({ 0, 0 });
	visited[0][0] = 1;

	while (reservation.empty() == false)
	{
		int y = reservation.front().first;
		int x = reservation.front().second;
		reservation.pop();

		for (int i = 0; i < 4; ++i)
		{
			int nextY = y + dy[i];
			int nextX = x + dx[i];

			if (nextY >= height || nextX >= width || nextX < 0 || nextY < 0)
				continue;

			if (visited[nextY][nextX] > -1)
				continue;

			if (maze[nextY][nextX] == '0')
				continue;

			reservation.push({ nextY, nextX });
			visited[nextY][nextX] = visited[y][x] + 1;
		}
	}

	std::cout << visited[height - 1][width - 1];

	return 0;
}