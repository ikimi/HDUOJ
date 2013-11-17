#include <stdio.h>

int main()
{
    double e = 0.0, k = 1.0;
    int i, j;
    printf("n e\n");
    printf("- -----------\n");

    for (i = 0;i < 10;i++)
    {
        for (j = 1;j <= i;j++)
            k *= j;
        e += (double) 1/k;

        if (i <= 1)
            printf("%d %.0f\n", i, e);
        else if (i == 2)
            printf("%d %.1f\n", i, e);
        else
            printf("%d %.9f\n", i, e);
        k = 1.0;
    }
    return 0;
}
