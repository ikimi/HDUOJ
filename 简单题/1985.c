#include <stdio.h>
#include <string.h>

int main()
{
    int N, i;
    double data;
    char unit[5];
    scanf ("%d", &N);
    i = 1;
    while (i <= N)
    {
        memset(unit, '\0', sizeof(unit));
        scanf("%lf %s", &data, unit);
        if (!strcmp(unit, "kg"))
            printf("%d %.4lf lb\n", i++, data * 2.2046);
        else if (!strcmp(unit, "lb"))
            printf("%d %.4lf kg\n", i++, data * 0.4536);
        else if (!strcmp(unit, "l"))
            printf("%d %.4lf g\n", i++, data * 0.2642);
        else
            printf("%d %.4lf l\n", i++, data * 3.7854);
    }
    return 0;
}
