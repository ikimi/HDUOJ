#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    int y;
} nodes[20000];
struct rec
{
    struct node a;
    struct node b;
} recs[100];
int data[20000];
int compare(const void *p, const void *q);

int main()
{
    int m, n, i, j;

    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
        scanf("%d%d", &nodes[i].x, &nodes[i].y);
    for (i = 0; i < n; i++)
        scanf("%d%d%d%d", &recs[i].a.x, &recs[i].a.y, &recs[i].b.x, &recs[i].b.y);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (nodes[i].x >= recs[j].a.x && nodes[i].x <= recs[j].b.x && nodes[i].y >= recs[j].a.y && nodes[i].y <= recs[j].b.y)
            {
                data[i] = 2 * (recs[j].b.x - recs[j].a.x + recs[j].b.y - recs[j].a.y);
                break;
            }
        }
        if (j == n)
            data[i] = 0;
    }
    qsort(data, m, sizeof(data[0]), compare);
    for (i = 0; i < m; i++)
        printf("%d\n", data[i]);
    return 0;
}

int compare(const void *p, const void *q)
{
    const int *a = p;
    const int *b = q;

    return *b - *a;
}
