#include <stdio.h>
#include <memory.h>

int main()
{
    int n, t, i, flag[10000000];
    while (scanf("%d", &n) != EOF)
    {
        memset(flag, 0, sizeof(flag));
        if (n == 1)
            printf("2^? mod 1 = 1\n");
        else
        {
            t = 2; i = 1;
            while (t !=1 && !flag[t])
            {
                flag[t] = 1;
                t = (2 * t) % n;
                i++;
            }
            if (flag[t])
                printf("2^? mod %d = 1\n", n);
            else
                printf("2^%d mod %d = 1\n", i, n);
        }
    }
    return 0;
}
