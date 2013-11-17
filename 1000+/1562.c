#include <stdio.h>

int main()
{
    int n, a, b, c, i;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d %d", &a, &b, &c);
        for (i = 1000; i < 10000; i++)
        {
            if (i % a)
                continue;
            if ((i + 1) % b)
                continue;
            if ((i + 2) % c)
                continue;
            printf("%d\n", i);
            break;
        }
        if (i == 10000)
            printf("Impossible\n");
    }
    return 0;
}
