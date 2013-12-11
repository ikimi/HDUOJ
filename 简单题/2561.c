#include <stdio.h>
#include <stdlib.h>

int data[10000];
int compare(const void *p, const void *q);

int main()
{
    int t, n, i;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        i = n;
        for (i = 0; i < n; i++)
            scanf("%d", &data[i]);
        qsort(data, n, sizeof(data[0]), compare);
        printf("%d\n", data[1]);
    }
    return 0;
}

int compare(const void *p, const void *q)
{
    const int *a = p;
    const int *b = q;

    return *a - *b;
}
