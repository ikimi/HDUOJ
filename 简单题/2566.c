#include <stdio.h>

int main()
{
    int t, n, m, i, j, k, sum;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &m);
        for (i = sum = 0; i <= n; i++)
            for (j = 0; j <= n; j++)
                for (k = 0; k <= n; k++)
                    if (i + j + k == n && i + 2 *j + 5 *k == m)
                        sum++;
        printf("%d\n", sum);
    }
    return 0;
}
