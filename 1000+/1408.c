#include <stdio.h>
#include <math.h>

int main()
{
    double dul, d;
    int n, sum, i;
    while (scanf("%lf %lf", &dul, &d) != EOF)
    {
        n = ceil(dul / d); // 向上取整
        sum = n - 1; i = 1;
        while (sum > 0)
        {
            n += 1;
            i++;
            sum -= i;
        }
        printf("%d\n", n);
    }
    return 0;
}
