#include <stdio.h>

int main()
{
    int T, N, x, sum;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        sum = 0;
        while (N--)
        {
            scanf("%d", &x);
            sum += x;
        }
        printf("%d\n", sum);
        if(T)
            printf("\n");
    }
    return 0;
}
