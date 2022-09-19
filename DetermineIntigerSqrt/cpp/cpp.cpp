#include <string>
#include <vector>
#include <tgmath.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    float root = sqrt(n);

    if (root - floor(root) == 0)
        answer = pow(root + 1, 2);
    else 
        answer = -1;

    return answer;
}