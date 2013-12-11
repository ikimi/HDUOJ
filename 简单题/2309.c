#include <stdio.h>

int main()
{
    int i, n, sum, max, min, x;

    while (scanf("%d", &n), n)
    {
        max = -1; min = 1001;
        sum = 0; i = n - 2;
        while (n--)
        {
            scanf("%d", &x);
            sum += x;
            if (x > max)
                max = x;
            if (x < min)
                min = x;
        }
        sum -= max + min;
        printf("%d\n", sum / i);
    }
    return 0;
}
