#include <stdio.h>

int main()
{
    int d, n, i;
    scanf("%d", &d);
    while (d--)
    {
        scanf("%d", &n);
        i = 0;
        while (n != 1)
        {
            if (n % 2)
                printf("%d ", i);
            i++;
            n /= 2;
        }
        printf("%d\n", i);
    }
    return 0;
}
