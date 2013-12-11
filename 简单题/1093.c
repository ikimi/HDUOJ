#include <stdio.h>

int main()
{
    int N, n, x, sum;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &n);
        sum = 0;
        while (n--)
        {
            scanf("%d", &x);
            sum += x;
        }
        printf("%d\n", sum);
    }
    return 0;
}
