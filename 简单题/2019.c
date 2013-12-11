#include <stdio.h>
#define MAX 110

int data[MAX];

int main()
{
    int i, n, m;
    while (scanf("%d%d", &n, &m), m || n)
    {
        for (i = 0; i < n; i++)
            scanf ("%d", &data[i]);
        for (i = 0; i < n; i++)
        {
            if (m > data[i])
                printf("%d ", data[i]);
            else
            {
                printf("%d ", m);
                break;
            }
        }
        if (i >= n)
        {
            printf("%d\n", m);
        }
        else
        {
            for (; i < n - 1; i++)
                printf("%d ", data[i]);
            printf("%d\n", data[i]);
        }
    }
    return 0;
}
