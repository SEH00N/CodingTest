#include <iostream>

using namespace std;

int main()
{
	int cnt, answer = 0;
	string input;
	cin >> cnt >> input;

	for (int i = 0; i < cnt; i++)
		answer += input[i] - 48;

	cout << answer;

	return 0;
}