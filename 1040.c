#include <stdio.h>

int main()
{
    int T, i, n, j, a[1001], min, temp, k;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for (j = 0; j < n - 1; j++)
        {
            min = j;
            for (k = j + 1; k < n; k++)
                if (a [k] < a[min])
                    min = k;
            if (min != j)
            {
                temp = a[j];
                a[j] = a[min];
                a[min] = temp;
            }
        }
        for (j = 0; j < n - 1; j++)
            printf("%d ", a[j]);
            printf("%d\n", a[j]);
    }
    return 0;
}
