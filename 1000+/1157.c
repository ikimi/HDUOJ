#include <stdio.h>

int main()
{
    int N, i, j, min, temp, data[10000];
    while (scanf("%d", &N) != EOF)
    {
    i = 0;
    while (i < N)
    {
        scanf("%d", &data[i++]);
    }
    for (i = 0; i < N - 1; i++)
    {
        min = i;
        for (j = i + 1; j < N; j++)
        {
            if (data[min] > data[j])
                min = j;
        }
        if (min != i)
        {
            temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
    printf("%d\n", data[(N - 1) / 2]);
    }
    return 0;
}
