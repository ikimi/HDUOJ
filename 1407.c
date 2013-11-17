#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, k, n, flag;
    double mid;

    while (scanf("%d", &n) != EOF)
    {
        mid = sqrt(n);
        flag = 0;
        for (i = 1; i <= mid; i++)
        {
            if (flag)
                break;
            for (j = i; j <= mid; j++)
            {
                if (flag)
                    break;
                for (k = j; k <= mid; k++)
                {
                    if (i * i + j * j + k * k == n)
                    {
                        flag = 1;
                        printf("%d %d %d\n", i, j, k);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
