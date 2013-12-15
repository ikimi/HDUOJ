#include <stdio.h>
#include <string.h>

int main()
{
    char data[102][22], temp[210];
    int i, j, k, n, cols;

    while (scanf("%d", &n), n)
    {
        scanf("%s", temp);
        cols = strlen(temp) / n;
        for (i = 0; i < cols; i++)
        {
            if (i % 2)
            {
                for (j = n - 1, k = 0; j >= 0; j--, k++)
                    data[i][j] = temp[i * n + k];
            }
            else
            {
                for (j = 0; j < n; j++)
                    data[i][j] = temp[i * n + j];
            }
        }
        for (i = 0; i < n; i++)
            for (j = 0; j < cols; j++)
                putchar(data[j][i]);
        putchar('\n');

    }
    return 0;
}
