#include <stdio.h>
#include <memory.h>

int sort(int data[], int length);
int twice(int data[], int length);

int main()
{
    int n, data[20], i;
    while (scanf("%d", &n))
    {
        if (n == -1)
            break;
        memset(data, 0, sizeof(data));
        data[0] = n;
        i = 1;
        while (scanf("%d", &n), n)
            data[i++] = n;
        sort(data, i);
        printf("%d\n", twice(data, i));
    }
    return 0;
}

int sort(int data[], int length)
{
    int i, j, min, temp;
    for (i = 0; i < length - 1; i++)
    {
        min = i;
        for (j = i + 1; j < length; j++)
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
    return 0;
}

int twice(int data[], int length)
{
    int i, j, sum = 0;
    for (i = length - 1; i > 0; i--)
        for (j = i - 1; j >= 0; j--)
            if (data[i] == data[j] * 2)
                sum ++;
    return sum;
}




