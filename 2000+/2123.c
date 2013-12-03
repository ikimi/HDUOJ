#include <stdio.h>

int data[10][10];

void init(void);
void print(int n);

int main()
{
    int C, n;

    init();
    scanf("%d", &C);
    while (C--)
    {
        scanf("%d", &n);
        print(n);
    }
    return 0;
}

void init(void)
{
    int i, j;

    for (i = 1; i < 10; i++)
        for (j = 1; j < 10; j++)
            data[i][j] = i * j;
}

void print(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < n; j++)
        {
            printf("%d ", data[i][j]);
        }
        printf("%d\n", data[i][j]);
    }
}
