#include <stdio.h>

int main()
{
    int t, n;
    double max, temp;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        max = -1;
        while(n--)
        {
            scanf("%lf", &temp);
            if (temp > max)
                max = temp;
        }
        printf("%.2lf\n", max);
    }
    return 0;
}
