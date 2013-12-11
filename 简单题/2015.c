#include <stdio.h>

int data[101];
void init (void);

int main()
{
    int n, m, sum, i, j;
    init ();
    while (scanf("%d%d", &n, &m) != EOF)
    {
        i = 1;
        while (i + m - 1 < n)
        {
            sum = 0;
            for (j = 0; j < m; j++)
                sum += data[i + j];
            i += m;
            printf("%d ", sum / m);
        }
        sum = 0;
        for (j = 0; i <= n; j++, i++)
            sum += data[i];
        printf("%d\n", sum / j);
    }
    return 0;
}

void init (void)
{
    int i;
    for (i = 1; i < 101; i++)
        data[i] = data[i - 1] + 2;
}
