#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> numbers)
{
	int answer = 0;

	for (auto x : numbers)
		answer += x;

	return 45 - answer;
}

int main()
{
	cout << solution({ 1, 2, 3, 4, 5 }) << endl;

	return 0;
}