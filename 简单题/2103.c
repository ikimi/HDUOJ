#include <stdio.h>

int main()
{
    int T, M, N, i, j, child, cost, flag, n;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &M, &N);
        if (M < N)
            n = M;
        else
            n = N;
        for (i = flag = 0; i < n; i++)
        {
            if (scanf("%d", &child), child)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            i++;
        for (j = i; j < N; j++)
            scanf("%d", &child);
        cost = 0;
        for (j = 1; i < N; i++, j *= 2)
            cost += j;
        if (cost)
            printf("%d0000 RMB\n", cost);
        else
            printf("0 RMB\n");
    }
    return 0;
}
