#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int num) {
    string answer = "";
    
    answer = num % 2 == 0 ? "Even" : "Odd";

    return answer;
}

int main()
{
    for (int i = 0; i < 10; i++)
        cout << "Input Number : " << i << " | " << solution(i) << endl;

    return 0;
}