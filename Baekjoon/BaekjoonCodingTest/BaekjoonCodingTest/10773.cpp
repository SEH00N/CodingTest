#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> st;

	int count, num, sum = 0;
	cin >> count;

	for (int i = 0; i < count; ++i)
	{
		cin >> num;
		if (num == 0)
			st.pop();
		else
			st.push(num);
	}

	while (st.empty() == false)
	{
		sum += st.top();
		st.pop();
	}

	cout << sum;

	return 0;
}