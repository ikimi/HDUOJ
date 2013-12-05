#include <stdio.h>

int main()
{
    double sum;
    int n, i;

    while (scanf("%d", &n), n)
    {
        sum = 0;
        for (i = n; i >= 2; i--)
            sum += (n - i + 1) * 1.0 / i;
        sum = sum * 2 + n;
        printf("%.2lf\n", sum);
    }
    return 0;
}
