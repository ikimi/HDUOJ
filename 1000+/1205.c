/*
    当最大堆的糖果数量 与 剩余所有糖果数量总和的差 <= 1时，可以找到这样的分隔方法
*/

#include <stdio.h>

int main()
{
    int T, n, max, x;
    long long int sum;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        sum = max = 0;
        while (n--)
        {
            scanf("%d", &x);
            sum += x;
            if (max < x)
                max = x;
        }
        if (2 * max - sum <= 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
