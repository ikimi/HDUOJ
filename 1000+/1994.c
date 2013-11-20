#include <stdio.h>

int main()
{
    int N;
    double Y, Q, e, f, g, eff1, eff2;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%lf%lf%lf%lf%lf", &Y, &Q, &e, &f, &g);
        eff1 = (Y * (1 + (e / 100) * (Q / 365))) * (1 + g / 100);
        eff2 = Y * (1 + (f / 100) * (Q + 365) / 365);
        printf("%.1lf\n", eff1);
        printf("%.1lf\n", eff2);
    }
    return 0;
}
