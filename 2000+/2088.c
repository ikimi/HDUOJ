#include <stdio.h>

int main()
{
    int i, n, sum, avg, res, data[60];

    scanf("%d", &n);
    while (n)
    {
        sum = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &data[i]);
            sum += data[i];
        }
        avg = sum / n; res = 0;
        for (i = 0; i < n; i++)
            if (data[i] > avg)
                res += data[i] - avg;
        if (scanf("%d", &n), n)
            printf("%d\n\n", res);
        else
            printf("%d\n", res);
    }
    return 0;
}
