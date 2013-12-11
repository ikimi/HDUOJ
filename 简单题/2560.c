#include <stdio.h>

int main()
{
    int t, n, m, sum, i, x;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &m);
        sum = 0;
        while (n--)
        {
            i = m;
            while (i--)
            {
                scanf("%d", &x);
                if (x)
                    sum++;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
