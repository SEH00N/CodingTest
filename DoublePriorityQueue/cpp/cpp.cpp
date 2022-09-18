#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
class MyQueue
{
	public:
		void enqueue(T value)
		{
			vec.push_back(value);
		}
		T dequeue()
		{
			if (vec.size() <= 0) return 0;

			std::sort(vec.begin(), vec.end());
			T returnValue = vec.front();
			vec.erase(vec.begin());

			return returnValue;
		}
		T pop()
		{
			if (vec.size() <= 0) return 0;

			std::sort(vec.begin(), vec.end());
			T returnValue = vec.back();
			vec.pop_back();

			return returnValue;
		}
		vector<T> sort()
		{
			std::sort(vec.begin(), vec.end());

			return vec;
		}
	private :
		vector<T> vec;
};

vector<string> split(string input)
{
	vector<string> returnValue;
	string temp;
	stringstream ss(input);

	while (ss >> temp)
		returnValue.push_back(temp);
	
	return returnValue;
}

vector<int> solution(vector<string> operations) {
    vector<int> answer;
	MyQueue<int> queue = MyQueue<int>();

	for (string x : operations)
	{
		if (x == "D 1")
		{
			queue.pop();
		}
		else if (x == "D -1")
		{
			queue.dequeue();
		}
		else
		{
			queue.enqueue(stoi(split(x)[1]));
		}
	}

	if (queue.sort().size() <= 0)
	{
		answer.push_back(0);
		answer.push_back(0);
	}
	else
	{
		answer.push_back(*(queue.sort().end() - 1));
		answer.push_back(*(queue.sort().begin()));
	}

    return answer;
}

int main()
{
	vector<string> s = { "I -45", "I 653", "D 1", "I -642", "I 45", "I 97", "D 1", "D -1", "I 333" };

	cout << solution(s).front() << ' ' << solution(s).back() << endl;

    return 0;
}