#include <iostream>
#include <vector>
#include <stack>

int main()
{
	std::string command;
	std::cin >> command;

	std::vector<std::pair<int, int>> pipes;
	std::vector<int> laserPoint;
	std::stack<int> st;

	for (int i = 0; i < command.length(); ++i)
	{
		if (command[i] == '(')
			st.push(i);
		else
		{
			if (st.top() == i - 1)
				laserPoint.push_back(i);
			else
				pipes.push_back({ st.top(), i });

			st.pop();
		}
	}

	int answer = 0;

	for (int i = 0; i < laserPoint.size(); ++i)
		for (int j = 0; j < pipes.size(); ++j)
			if (pipes[j].first <= laserPoint[i] && laserPoint[i] <= pipes[j].second)
				answer++;

	std::cout << answer + pipes.size();

	return 0;
}