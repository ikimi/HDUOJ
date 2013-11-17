#include <stdio.h>

int main()
{
    double c, sum;
    int n;
    while (scanf("%lf", &c) == 1)
    {
        if (c == 0.00)
            break;
        else
        {
            n = 1;
            sum = 1.0 / (n + 1);
            while (sum < c)
            {
                ++n;
                sum += 1.0/(n + 1);
             //   printf("%lf\n", sum);
            }
        printf("%d card(s)\n", n);
        }
    }
    return 0;
}
