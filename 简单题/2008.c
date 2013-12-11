#include <stdio.h>

int main()
{
    int n, a, b, c;
    double i;
    while (scanf("%d", &n), n)
    {
        a = b = c = 0;
        while (n--)
        {
            scanf("%lf", &i);
            if (i > 0)
                a++;
            else if (i < 0)
                c++;
            else
                b++;
        }
        printf("%d %d %d\n", c, b, a);
    }
    return 0;
}
