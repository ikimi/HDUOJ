/*
    暴力穷举法（数据量较小）
*/

#include <stdio.h>

int main()
{
    int T, money, i, j, k, sum, min;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &money);
        sum = 0;
        min = 10000;
        for (i = 0; i < 67; i++)
            for (j = 0; j < 51; j++)
                for (k = 0; k < 29; k++)
                {
                    sum = 350 * k + 200 * j + 150 * i;
                    if (sum <= money)
                    {
                        if (min > (money - sum))
                            min = money - sum;
                    }
                }
        printf("%d\n", min);
    }
    return 0;
}











