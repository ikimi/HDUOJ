#include <stdio.h>
#include <stdlib.h>

int data[10010];
int compare(const void *p, const void *q);

int main()
{
    int t, n, max, i, j;

    scanf("%d", &t);
    while (t--)
    {
        max = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &data[i]);
        qsort(data, n, sizeof(data[0]), compare);
        for (i = 0; i < n;)
        {
            j = i + 1;
            while (j < n && data[i] == data[j])
                j++;
            if (j - i > max)
                max = j - i;
            i = j;
        }
        printf("%d\n", max);
    }
    return 0;
}

int compare(const void *p, const void *q)
{
    const int *a = p;
    const int *b = q;

    return *a - *b;
}
