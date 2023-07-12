#include <iostream>

using namespace std;

int factorial(int target)
{
    if (target <= 1)
        return 1;

    return target * factorial(target - 1);
}

int main()
{
    int input;
    cin >> input;

    cout << factorial(input);

    return 0;
}