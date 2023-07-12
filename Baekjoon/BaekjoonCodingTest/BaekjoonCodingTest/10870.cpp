#include <iostream>

using namespace std;

int fibonacci(int target)
{
    if (target == 0)
        return 0;
    else if (target < 3)
        return 1;

    return fibonacci(target - 1) + fibonacci(target - 2);
}

int main()
{
    int input;
    cin >> input;

    cout << fibonacci(input);

    return 0;
}