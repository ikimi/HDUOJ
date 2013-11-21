#include <stdio.h>

double data[1002];
void init (void);

int main ()
{
    int m, n;
    init();
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d", &n);
        printf("%.2lf\n", data[n]);
    }
    return 0;
}

void init (void)
{
    int i;
    data[1] = 1;
    for (i = 2; i <= 1000; i++)
        if (i % 2)
            data[i] = data[i - 1] + 1.0 / i;
        else
            data[i] = data[i - 1] - 1.0 / i;
}
