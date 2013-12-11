#include <stdio.h>
#define MAX 30

void init (void);
long long int data[MAX];

int main()
{
    int c, n, i;
    double sum;
    init();
    scanf ("%d", &c);
    while (c--)
    {
        scanf ("%d", &n);
        for (i = 2, sum = 1; i <= n; i++)
            sum *= i;
        printf("%.2lf%%\n", data[n] / sum * 100);
    }
    return 0;
}

void init (void)
{
    int i;
    data[1] = 0;
    data[2] = 1;
    for (i = 3; i < MAX; i++)
        data[i] = (i - 1) * (data[i - 1] + data[i - 2]);
}
