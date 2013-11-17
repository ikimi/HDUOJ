#include <stdio.h>

int main()
{
    int T, a, b, sum1, sum2;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &sum1, &sum2);
        if (sum1 < sum2 || (sum1 + sum2) % 2 != 0) // 因为没有判断 mod的结果wa了一次!!
            printf("impossible\n");
        else
        {
            a = (sum1 + sum2) / 2;
            b = (sum1 - sum2) / 2;
            if (a > b)
                printf("%d %d\n", a, b);
            else
                printf("%d %d\n", b, a);
        }
    }
    return 0;
}
