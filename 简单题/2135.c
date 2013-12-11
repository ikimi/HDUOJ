#include <stdio.h>

char temp[11][11];
char data[11][11];
void print(char d[][11], int n);
void sol(int n, int m);

int main()
{
    int n, m, i, j;

    while (scanf("%d%d", &n, &m) != EOF)
    {
        getchar();
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
                temp[i][j] = getchar();
            getchar();
        }
        if ((m %= 4) < 0)
            m += 4;
        sol(n, m);
        if (m % 2)
            print(data, n);
        else
            print(temp, n);
    }
    return 0;
}

void print(char d[][11], int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%c", d[i][j]);
        printf("\n");
    }
}

void sol(int n, int m)
{
    int i, j, k = 1;

    while(k <= m)
    {
        if (k % 2)
            for (i = 1; i <= n; i++)
                for (j = 1; j <= n; j++)
                    data[j][n + 1 - i] = temp[i][j];
        else
            for (i = 1; i <= n; i++)
                for (j = 1; j <= n; j++)
                    temp[j][n + 1 - i] = data[i][j];
        k++;
    }
}
