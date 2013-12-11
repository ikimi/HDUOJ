#include <stdio.h>

int main()
{
    int n, sum, i, j, k;

    while (scanf("%d", &n), n)
    {
        if (n == 1)
        {
            printf("  1\n");
            continue;
        }

        sum = 5 * n - 3;
        for (i = 1; i <= n; i++)
        {
            if (i >= 10)
                printf(" %d", i);
            else
                printf("  %d", i);
        }
        printf("\n");

        for (i = 2, k = 4 * (n - 1); i <= n - 1; i++)
        {
            if (k >= 10)
                printf(" %d", k);
            else
                printf("  %d", k);
            for (j = 2; j <= n - 1; j++)
                printf("   ");
            if (sum - k >= 10)
                printf(" %d", sum - k);
            else
                printf("  %d", sum - k);
            printf("\n");
            k--;
        }
        for (i = 3 * n - 2; i >= 2 * n - 1; i--)
        {
            if (i >= 10)
                printf(" %d", i);
            else
                printf("  %d", i);
        }
        printf("\n");
    }

    return 0;
}
