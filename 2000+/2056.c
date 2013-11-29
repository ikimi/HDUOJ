#include <stdio.h>
#include <stdlib.h>

struct Node {
    double x;
    double y;
    int type;
} data[4];
void filter(struct Node *a, struct Node *b);
int compare(const void *p, const void *q);
double min(double x, double y);
double max(double x, double y);
void print();

int main()
{
    while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &data[0].x, &data[0].y, &data[1].x, &data[1].y, &data[2].x, &data[2].y, &data[3].x, &data[3].y) != EOF)
    {
        data[0].type = data[1].type = 0;
        data[2].type = data[3].type = 1;
        filter(&data[0], &data[1]);
        filter(&data[2], &data[3]);
        qsort(data, 4, sizeof(data[0]), compare);
        if (data[0].type == data[1].type)
            printf("0.00\n");
        else
        {
            if (max(data[0].y, data[1].y) >= min(data[2].y, data[3].y))
                printf("0.00\n");
            else
            {
                printf("%.2lf\n", (data[2].x - data[1].x) * (min(data[2].y, data[3].y) - max(data[0].y, data[1].y)));
            }
        }
    }
    return 0;
}

void filter(struct Node *a, struct Node *b)
{
    double temp;
    if (a->x < b->x && a->y > b->y)
    {
        temp = a->y;
        a->y = b->y;
        b->y = temp;
    }
    else if (a->x > b->x && a->y < b->y)
    {
        temp = a->x;
        a->x = b->x;
        b->x = temp;
    }
    else if (a->x > b->x && a->y > b->y)
    {
        temp = a->x;
        a->x = b->x;
        b->x = temp;
        temp = a->y;
        a->y = b->y;
        b->y = temp;
    }
}

int compare(const void *p, const void *q)
{
    const struct Node *a = p;
    const struct Node *b = q;
    if (a->x > b->x)
        return 1;
    else if (a->x < b->x)
        return -1;
    else
        return 0;
}

double min(double x, double y)
{
    return x < y ? x : y;
}

double max(double x, double y)
{
    return x > y ? x : y;
}

void print()
{
    int i;
    for (i = 0; i < 4; i++)
        printf("x:%.2lf\ny:%.2lf\ntype:%d\n", data[i].x, data[i].y, data[i].type);
}
