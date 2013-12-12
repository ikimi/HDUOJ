#include <stdio.h>

struct node
{
    int start;
    int sum;
} data[100010];

int main()
{
    int T, x, n, i, j, max;

    scanf("%d", &T);
    for (j = 1; j <= T; j++)
    {
        scanf("%d", &n);
        scanf("%d", &data[0].sum);
        data[0].start = 0;
        for (i = 1; i < n; i++)
        {
            scanf("%d", &x);
            if (data[i - 1].sum + x >= x)
            {
                data[i].sum = data[i - 1].sum + x;
                data[i].start = data[i - 1].start;
            }
            else
            {
                data[i].sum = x;
                data[i].start = i;
            }
        }
        for (i = max = 0; i < n; i++)
            if (data[max].sum < data[i].sum)
                max = i;
        printf("Case %d:\n", j);
        printf("%d %d %d\n", data[max].sum, data[max].start + 1, max + 1);
        if (j % T)
            printf("\n");
    }
    return 0;
}
