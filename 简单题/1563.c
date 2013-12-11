#include <stdio.h>

int sort(int data[], int n);

int main()
{
    int i, n, start, end, data[202];
    while (scanf("%d", &n), n)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &data[i]);
        sort(data, n);
        for (i = 0; i < n - 1;)
        {
            start = i;
            while (data[i] == data[i + 1])
                i++;
            end = i;
            if (end == start)
            {
                printf("%d\n", data[start]);
                break;
            }
            else
                i++;
        }
        if (i == n - 1)
            printf("%d\n", data[n-1]);
    }
    return 0;
}

int sort(int data[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (data[min] > data[j])
                min = j;
        if (min != i)
        {
            temp =  data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
    return 0;
}
