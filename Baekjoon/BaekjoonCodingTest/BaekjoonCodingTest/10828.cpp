#include <iostream>
#include <string>

using namespace std;

template<class T>
class Stack {
private:
	int _top;
	int _size;
	T* arr;

public:
	Stack(int size = 10000) : _size{ size }, _top{ -1 }, arr{ new T[size] } {}
	void push(T item) {
		if (_top + 1 >= _size)
			return;

		arr[++_top] = item;
	}

	T pop() {
		if (_top <= -1)
			return NULL;

		return arr[_top--];
	}

	T top() {
		if (_top <= -1)
			return NULL;

		return arr[_top];
	}

	int size() { return (_top + 1); }
	bool empty() { return (_top <= -1); }
};

int main()
{
	Stack<int> st;
	int count, temp;
	string command;
	cin >> count;

	for (int i = 0; i < count; ++i)
	{
		cin >> command;

		if (command == "push") {
			cin >> temp;
			st.push(temp);
		}
		else if (command == "pop") {
			temp = st.pop();
			if (temp == 0)
				cout << -1 << endl;
			else
				cout << temp << endl;
		}
		else if (command == "top") {
			temp = st.top();
			if (temp == 0)
				cout << -1 << endl;
			else
				cout << temp << endl;
		}
		else if (command == "size")
			cout << st.size() << endl;
		else if (command == "empty")
			cout << st.empty() << endl;
	}

	return 0;
}