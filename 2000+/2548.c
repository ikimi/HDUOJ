#include <stdio.h>

int main()
{
    int T;
    double a, b, c, d;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
        printf("%.3lf\n", d / (a + b) * c);
    }
    return 0;
}
