#include <stdio.h>
#include <math.h>

struct point
{
    double x;
    double y;
    double cos;
} data[101];

void sort(int n);
void print(int n);

int main()
{
    int n, i;
    while (scanf("%d", &n) != EOF && n >= 0)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%lf%lf", &data[i].x, &data[i].y);
            data[i].cos = data[i].x / (sqrt(data[i].x * data[i].x + data[i].y * data[i].y));
        }
        sort(n);
        print(n);
    }
    return 0;
}

void sort(int n)
{
    int i, j, max;
    double temp;
    for (i = 0; i < n - 1; i++)
    {
        max = i;
        for (j = i + 1; j < n; j++)
        {
            if (data[j].cos > data[max].cos)
                max = j;
        }
        if (max != i)
        {
            temp = data[i].x;
            data[i].x = data[max].x;
            data[max].x = temp;
            temp = data[i].y;
            data[i].y = data[max].y;
            data[max].y = temp;
            temp = data[i].cos;
            data[i].cos = data[max].cos;
            data[max].cos = temp;
        }
    }
}

void print(int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
        printf("%.1lf %.1lf ", data[i].x, data[i].y);
    printf("%.1lf %.1lf\n", data[i].x, data[i].y);
}
