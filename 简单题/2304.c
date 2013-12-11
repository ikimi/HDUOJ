#include <stdio.h>

int main()
{
    int N, k, x, sum;

    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &k);
        sum = 0;
        while (--k)
        {
            scanf("%d", &x);
            sum += x - 1;
        }
        scanf("%d", &x);
        sum += x;
        printf("%d\n", sum);
    }
    return 0;
}
