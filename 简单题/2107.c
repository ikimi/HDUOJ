#include <stdio.h>

int main()
{
    int n, max, x;

    while (scanf("%d", &n), n)
    {
        scanf("%d", &max);
        while (--n)
        {
            scanf("%d", &x);
            if (x > max)
                max = x;
        }
        printf("%d\n", max);
    }
    return 0;
}
