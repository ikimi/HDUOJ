#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    double a, b, c, d;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
        printf("%.1lf\n", sqrt(pow(a - c, 2)+ pow(b - d, 2)));
    }
    return 0;
}
