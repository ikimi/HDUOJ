#include <stdio.h>
#include <stdlib.h>

struct node
{
    double j;
    double f;
} data[1005];
int compare(const void *p, const void *q);

int main()
{
    int m, n, i, j;
    double sum;

    while (scanf("%d%d", &m, &n), m != -1 || n != -1)
    {
        for (i = 0; i < n; i++)
            scanf("%lf%lf", &data[i].j, &data[i].f);
        qsort(data, n, sizeof(data[0]), compare);
        for (i = j = sum = 0; i < n;)
            if (j + data[i].f <= m)
            {
                sum += data[i].j;
                j += data[i++].f;
            }
            else
            {
                sum += (m - j) * (data[i].j / data[i].f);
                break;
            }
        printf("%.3lf\n", sum);
    }
    return 0;
}

int compare(const void *p, const void *q)
{
    const struct node *a = p;
    const struct node *b = q;

    if (a->j / a->f > b->j / b->f)
        return -1;
    else if (a->j / a->f < b->j / b->f)
        return 1;
    else
        return 0;
}
