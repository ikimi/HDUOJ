#include <stdio.h>

int data[31][31];
void init(void);

int main()
{
    int T, n, m;

    init();
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &n, &m);
        if (m > n)
            printf("0\n");
        else
            printf("%d\n", data[n][m]);
    }

    return 0;
}

void init(void)
{
    int i, j;

    for (i = 0; i < 31; i++)
    {
        data[i][0] = 1;
        data[i][i] = 1;
    }
    for (i = 2; i < 31; i++)
        for (j = 1; j < i; j++)
            data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
}
