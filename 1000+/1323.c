#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum, i;
    double mid;
    printf("PERFECTION OUTPUT\n");
    while (scanf("%d", &n), n)
    {
        mid = sqrt(n);
        sum = 0;
        for (i = 2; i <= mid; i++)
            if (n % i == 0)
            {
                if (n / i != i)
                    sum += i + n / i;
                else
                    sum += i;
            }
        sum += 1;
        if (sum == n)
            printf("%5d  PERFECT\n", n);
        else if (sum < n)
            printf("%5d  DEFICIENT\n", n);
        else
            printf("%5d  ABUNDANT\n", n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
