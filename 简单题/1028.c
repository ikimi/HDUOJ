#include <stdio.h>
#define MAX 121

/*
    利用动态规划的方法解决整数划分问题
*/

int matrix[MAX][MAX];
int Dynamic();

int main()
{
    int N;
    Dynamic();

    while (scanf("%d", &N) != EOF)
    {
        printf("%d\n", matrix[N][N]);
    }

    return 0;
}

int Dynamic()
{
    int i, j;
    for (i = 1; i <= MAX; i++)
        matrix[i][1] = matrix[1][i] = 1;
    for (i = 2; i <= MAX; i++)
        for (j = 2; j <= MAX; j++)
            if (i < j)
                matrix[i][j] = matrix[i][i];
            else if (i > j)
                matrix[i][j] = matrix[i][j - 1] + matrix[i - j][j];
            else
                matrix[i][j] = matrix[i][j - 1] + 1;
    return 0;
}
