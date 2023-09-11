#include <iostream>
#include <vector>

const int dx[] = { 1, 0, -1, 0 };
const int dy[] = { 0, 1, 0, -1 };

void DFS(std::vector<std::vector<bool>>& field, std::vector<std::vector<bool>>& visited, int& answer, int x, int y)
{
	visited[y][x] = true;

	for (int i = 0; i < 4; ++i)
	{
		int nowX = x + dx[i];
		int nowY = y + dy[i];

		if (nowX < 0 || nowX >= field[0].size() || nowY < 0 || nowY >= field.size())
			continue;

		if (field[nowY][nowX] == false)
			continue;

		if (visited[nowY][nowX] == true)
			continue;

		DFS(field, visited, answer, nowX, nowY);
	}
}

int main()
{
	int test;
	std::cin >> test;

	for (int i = 0; i < test; ++i)
	{
		int row, col, cnt, answer = 0;
		std::cin >> col >> row >> cnt;

		std::vector<std::vector<bool>> field;
		field.resize(row, std::vector<bool>(col, false));

		std::vector<std::vector<bool>> visited;
		visited.resize(row, std::vector<bool>(col, false));

		for (int j = 0; j < cnt; ++j)
		{
			int x, y;
			std::cin >> x >> y;
			field[y][x] = true;
		}

		for (int j = 0; j < row; ++j)
		{
			for (int k = 0; k < col; ++k)
			{
				if (field[j][k] == false)
					continue;

				if (visited[j][k] == true)
					continue;

				answer++;
				DFS(field, visited, answer, k, j);
			}
		}
		
		std::cout << answer << '\n';
	}

	return 0;
}