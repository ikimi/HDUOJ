#include <stdio.h>

int main()
{
    int T, n, m, i, j, k, l, sum;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &n, &m);
        sum = 0;
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n - i + 1; j++)
                for (k = 1; k <= m; k++)
                    for (l = 1; l <= m - k + 1; l++)
                        sum++;
        printf("%d\n", sum);
    }
    return 0;
}
