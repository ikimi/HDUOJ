#include <stdio.h>
#include <memory.h>

int flag[65536];

int createPrime();

int main()
{
    int count, i, ans, n, nn;
    count = 0;
    createPrime();
    scanf("%d", &n);
    while(n > 1)
    {
        printf("Case %d.\n", ++count);
        nn = n;
        for (i = 2; i <= n; i++)
        {
            if (!flag[i])
                continue;
            ans = 0;
            while (!(nn % i))
            {
                ans++;
                nn /= i;
            }
            if (ans > 0)
                printf("%d %d ", i, ans);   //巨坑 每行的最后不输出空格!!
        }
        scanf("%d", &n);
        if (n > 1)
            printf("\n\n");
        else
            printf("\n");
    }
    return 0;
}

int createPrime()
{
    int i = 2, j;
    memset(flag, 1, sizeof(flag));
    for (; i < 65536; i++)
    {
        if (flag[i])
            for (j = 2; i * j < 65536; j++)
                flag[i * j] = 0;
    }
    return 0;
}
