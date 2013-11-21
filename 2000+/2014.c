#include <stdio.h>

int main()
{
    int n, j;
    double sum, min, max, i;
    while (scanf("%d", &n) != EOF)
    {
        sum = 0;
        j = n;
        scanf("%lf", &i);
        min = max = i; n--;
        sum += i;
        while (n--)
        {
            scanf("%lf", &i);
            if (i > max)
                max = i;
            if (i < min)
                min = i;
            sum += i;
        }
        sum -= min + max;
        printf("%.2lf\n", sum / (j- 2));
    }
    return 0;
}
