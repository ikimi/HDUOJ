#include <stdio.h>
#define MAX_N 35

int data[MAX_N][MAX_N];
void init (void);

int main()
{
    int n, i, j;
    init();
    while (scanf ("%d", &n) != EOF)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1;j < i; j++)
                printf("%d ", data[i][j]);
            printf("%d\n", data[i][i]);
        }
        printf("\n");
    }
    return 0;
}

void init (void)
{
    int i, j;
    for (i = 1; i <= 30; i++)
    {
        data[i][1] = data[i][i] = 1;
    }
    for (i = 3; i <= 30; i++)
        for (j = 2; j < i; j++)
            data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
}
