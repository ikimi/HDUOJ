#include <stdio.h>

int main()
{
    int T, n, i, sum;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        for (i = 1, sum = 0; i <= n; i++)
        {
            sum += n % 10000;
            sum %= 10000;
        }
        printf("%d\n", sum);
    }
    return 0;
}
