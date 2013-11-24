#include <stdio.h>
#define MAX(x, y) x > y ? x : y

int main()
{
    int n;
    double a, b, c, sum;
    scanf ("%d", &n);
    while (n--)
    {
        scanf ("%lf%lf%lf", &a, &b, &c);
        sum = a + b + c;
        c = MAX(MAX(a, b), c);
        if (sum - c > c)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
