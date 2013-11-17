#include <stdio.h>

int main()
{
    int n, i;
    double sum;
    printf("# Cards  Overhang\n");
    while (scanf("%d", &n) != EOF)
    {
        if (!n)
            printf("    0     0.000\n");
        else
        {
            sum = 0.0;
            for (i = 1; i <= n; i++)
                sum += 1.0 / (2 * i);
            printf("%5d%10.3lf\n", n, sum);
        }
    }
    return 0;
}
