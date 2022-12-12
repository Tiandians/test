#include <stdio.h>

int main(void)
{
    int n, matrix[10][10];
    scanf("%d", &n);
    int count = 1;
    int leftBound = -1, rightBound = n, upBound = -1, downBound = n;
    int toti = 0, totj = 0, totl = 1, totc = 0;
    while (count <= n * n)
    {
        matrix[toti][totj] = count++;
        // advance
        toti += totc;
        totj += totl;
        //
        if (totj == rightBound)
        { //撞击右侧
            totj--;
            totl = 0; //停止递增
            totc = 1;
            toti++;
            upBound++;
        }
        else if (totj == leftBound)
        {
            totl = 0;
            totc = -1;
            totj++;
            toti--;
            downBound--;
        }
        if (toti == upBound)
        {
            totl = 1;
            totc = 0;
            toti++;
            totj++;
            leftBound++;
        }
        else if (toti == downBound)
        {
            totl = -1;
            totc = 0;
            toti--;
            totj--;
            rightBound--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", matrix[i][j]);
        }
        putchar('\n');
    }
    return 0;
}