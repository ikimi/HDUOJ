#include <stdio.h>

int main()
{
    int N, i, count, n, pre;
    while (scanf("%d", &N) != EOF)
    {
        count = 0;
        for (i = 0; i < N; i++)
        {
            scanf("%d", &n);
            if (count == 0)
            {
                count++;
                pre = n;
            }
            else
                if (pre != n)
                    count--;
                else
                    count++;
        }
        printf("%d\n", pre);
    }

    return 0;
}
