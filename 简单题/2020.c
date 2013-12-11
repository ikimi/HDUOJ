#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 110

int data [MAX];
int compare (const void *p, const void *q);

int main()
{
    int n, i;
    while (scanf ("%d", &n), n)
    {
        for (i = 0; i < n; i++)
            scanf ("%d", &data[i]);
        qsort(data, n, sizeof(data[0]), compare);
        for (i = 0; i < n - 1; i++)
            printf("%d ", data[i]);
        printf("%d\n", data[i]);
    }
    return 0;
}

int compare (const void *p, const void *q)
{
    const int *a = p;
    const int *b = q;
    if (abs(*a) > abs(*b))
        return -1;
    else if (abs(*a) < abs(*b))
        return 1;
    else
        return 0;
}
