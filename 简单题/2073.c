#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);
int main()
{
    int N, x1, y1, x2, y2, t1, t2;
    scanf ("%d", &N);
    while (N--)
    {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        t1 = x1 + y1; t2 = x2 + y2;
        if (t1 == 0 && t2 == 0)
            printf("0.000\n");
        else if (t1 == 0 && t2 != 0)
            printf("%.3lf\n", 1 + distance(0, 1, x2, y2));
        else if (t2 == 0 && t1 != 0)
            printf("%.3lf\n", 1 + distance(0, 1, x1, y1));
        else
            printf("%.3lf\n", distance(x1, y1, x2, y2));
    }
    return 0;
}

void exchange(int *a, int *b);
double distance(int x1, int y1, int x2, int y2)
{
    int t1, t2;
    double sum;

    t1 = x1 + y1; t2 = x2 + y2;
    if (t1 > t2)
    {
        exchange(&x1, &x2);
        exchange(&y1, &y2);
    }
    t1 = x1 + y1; t2 = x2 + y2;
    sum = 0;
    sum -= sqrt(x1 * x1 + (t1 - y1) * (t1 - y1));
    while(t1 < t2)
    {
        sum += sqrt(2 * t1 * t1) + sqrt(t1 * t1 + (t1 + 1) * (t1 + 1));
        t1 ++;
    }
    sum += sqrt(x2 * x2 + (t2 - y2) * (t2 - y2));

    return sum;
}

void exchange(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
