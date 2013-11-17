#include <stdio.h>
#include <memory.h>
/*
    动态规划的思想
*/
int main()
{
    int s, d, n, flag[60];
    while (scanf("%d %d", &s, &d), s || d)
    {
        memset(flag, 0, sizeof(flag));
        n = 0;
        s %= 60;
        while (s && !flag[s])
        {
            flag[s] = 1;
            s = ((d + 1) * s) % 60;
            n++;
        }
        if (s == 0)
            printf("%d\n", n);
        else
            printf("Impossible\n");
    }

    return 0;
}
