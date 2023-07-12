#include <iostream>

using namespace std;

int main()
{
    int drawingPaper[100][100] = { 0 };
    int drawingCnt, drawingX, drawingY, pixelCnt = 0;
    cin >> drawingCnt;

    for (int i = 0; i < drawingCnt; ++i)
    {
        cin >> drawingX >> drawingY;
        for (int j = drawingY; j < drawingY + 10; ++j)
            for (int k = drawingX; k < drawingX + 10; ++k)
                drawingPaper[j][k] = 1;
    }

    for (int i = 0; i < 100; ++i)
        for (int j = 0; j < 100; ++j)
            if (drawingPaper[i][j] == 1)
                ++pixelCnt;

    cout << pixelCnt;

    return 0;
}