#include <stdio.h>
#include <string.h>

int data[2][10];
int sum[2];

int main()
{
    int n, m, i;
    char temp[110];

    while (scanf("%d", &n), n)
    {
        getchar();
        memset(sum, 0, sizeof(sum));
        for (i = 0; i < n; i++)
        {
            gets(temp);
            if (strstr(temp, " no good") && strlen(strstr(temp, " no good")) <= 8)
                data[i % 2][i / 2] = 0;
            else
            {
                data[i % 2][i / 2] = 1;
                sum[i % 2]++;
            }
        }
        if (n % 2)
            data[1][n / 2] = -1;

        if (n % 2)
            m = n / 2;
        else
            m = n / 2 - 1;
        for (i = 0; i <= m; i++)
            printf("%d ", i + 1);
        printf("Score\n");
        for (i = 0; i <= m; i++)
        {
            if (data[0][i])
                printf("O ");
            else
                printf("X ");
        }
        printf("%d\n", sum[0]);
        for (i = 0; i <= m; i++)
        {
            if (data[1][i] == 1)
                printf("O ");
            else if (data[1][i] == -1)
                printf("- ");
            else
                printf("X ");
        }
        printf("%d\n", sum[1]);
    }
    return 0;
}
