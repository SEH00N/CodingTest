#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int calVal = x;
    int compareVal = 0;

    for (int i = 0; i < to_string(x).length(); i++)
    {
        compareVal += calVal % 10;
        calVal /= 10;
    }

    answer = x % compareVal == 0;

    return answer;
}

int main()
{
    cout << (solution(1) ? "True" : "False") << endl;

    return 0;
}