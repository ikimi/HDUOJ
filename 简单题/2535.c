#include <stdio.h>
#include <stdlib.h>

int data[100];
int compare(const void *p, const void *q);

int main()
{
    int N, i, sum;

    while (scanf("%d", &N), N)
    {
        for (i = 0; i < N; i++)
            scanf("%d", &data[i]);
        qsort(data, N, sizeof(data[0]), compare);
        for (i = 0, sum = 0; i <= N/2; i++)
            sum += (data[i]) / 2 + 1;
        printf("%d\n", sum);
    }
    return 0;
}

int compare(const void *p, const void *q)
{
    const int *a = p;
    const int *b = q;

    return (*a - *b);
}
