#include <stdio.h>
#include <memory.h>
#include <math.h>

int mark[2001], data[1010];
int main()
{
    int T, n, k, i, j, m;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &n, &k);
        memset(mark, 0, sizeof(mark));
        for (i = 0; i < n; i++)
            scanf("%d", &data[i]);
        for (i = 0; i < n - 1; i++)
            for (j = i + 1; j < n; j++)
            {
                m = abs(data[i] - data[j]);
                if (!mark[m])
                    mark[m] = 1;
            }
        for (i = 0, m = 0; i < 2001 && m < k; i++)
            if (mark[i])
                m++;
        printf("%d\n", i - 1);
    }
    return 0;
}
