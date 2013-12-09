#include <stdio.h>
#include <stdlib.h>

struct arm
{
    int length;
    int number;
} data[50];
int compare(const void *p, const void *q);

int main()
{
    int t, n, i, j, k;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d%d", &data[i].length, &data[i].number);
        qsort(data, n, sizeof(data[0]), compare);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < data[i].number; j++)
            {
                printf(">+");
                for (k = 0; k < data[i].length - 2; k++)
                    printf("-");
                printf("+>\n");
            }
            printf("\n");
        }
    }
    return 0;
}

int compare(const void *p, const void *q)
{
    const struct arm *a = p;
    const struct arm *b = q;

    return a->length - b->length;
}
