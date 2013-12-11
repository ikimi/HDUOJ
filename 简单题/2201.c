#include <stdio.h>

int main()
{
    int i;
    double sum, n, m;

    while (scanf("%lf%lf", &n, &m) != EOF)
    {
        for (i = 1, sum =  1; i < m; i++)
            sum *= (n - i) / (n - i + 1);
        sum *= 1.0 / (n - m + 1);
        printf("%.2lf\n", sum);
    }
    return 0;
}
