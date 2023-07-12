#include <iostream>
#include <stack>

int main()
{
	int count, answer = 0;
	std::string str;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::stack<int> st;
		std::cin >> str;
		for (int j = 0; j < str.length(); ++j)
		{
			if (st.empty() || st.top() != str[j])
				st.push(str[j]);
			else
				st.pop();
		}

		if (st.empty())
			answer++;
	}

	std::cout << answer;

	return 0;
}