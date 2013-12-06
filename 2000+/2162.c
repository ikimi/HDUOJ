#include <stdio.h>

int main()
{
    int sum, n, x, count = 0;

    while (scanf("%d", &n), n > 0)
    {
        sum = 0;
        while (n--)
        {
            scanf("%d", &x);
            sum += x;
        }
        printf("Sum of #%d is %d\n", ++count, sum);
    }
    return 0;
}
