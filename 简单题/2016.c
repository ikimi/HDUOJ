#include <stdio.h>

int data[110];

int main()
{
    int n, i, min, temp;
    while (scanf("%d", &n), n)
    {
        scanf("%d", &data[0]);
        min = 0;
        for (i = 1; i < n; i++)
        {
            scanf("%d", &data[i]);
            if (data[i] < data[min])
                min = i;
        }
        if (min != 0)
        {
            temp = data[0];
            data[0] = data[min];
            data[min] = temp;
        }
        for (i = 0; i < n - 1; i++)
            printf("%d ", data[i]);
        printf("%d\n", data[i]);
    }
    return 0;
}
