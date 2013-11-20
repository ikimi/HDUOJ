#include <stdio.h>
#define abs(x) (x < 0)? -x: x

int main()
{
    double c;
    while (scanf("%lf", &c) != EOF)
    {
        printf("%.2lf\n", abs(c));
    }
    return 0;
}
