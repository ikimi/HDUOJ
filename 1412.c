#include <stdio.h>

int data[20002];

int sort(int length);
int print(int length);

int main()
{
    int m, n, i;
    while (scanf("%d %d", &m, &n) != EOF)
    {
        for (i = 0; i < m + n; i++)
            scanf("%d", &data[i]);
        sort(m+n);
        print(m+n);
    }
    return 0;
}

int sort(int length)
{
    int i, j, min, temp;
    for (i = 0; i < length - 1; i++)
    {
        min = i;
        for (j = i + 1; j < length; j++)
            if (data[j] < data[min])
                min = j;
        if (min != i)
        {
            temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
    return 0;
}

int print(int length)
{
    int i;
    for (i = 0; i < length - 1; i++)
        if (data[i] != data[i + 1])
            printf("%d ", data[i]);
    printf("%d\n", data[i]);
    return 0;
}




