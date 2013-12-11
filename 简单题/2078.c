/*
    这道题拿上来第一感觉好复杂 看了网上的解题思路很是巧妙
    设 a1,a2.....an是单调递减的序列，那么（a1 - an）* (a1 - an)
    大于a1 与 an 间的不交叉的任意两点平方和 即：(a1 - an) * (a1 - an) >= (a1 - ai) * (a1 - ai) + (ai - an) * (ai - an)
    其中 ai 位于 a1与an之间
    证明方法非常简单，只要打开方程两边分析就可以
*/

#include <stdio.h>

int main()
{
    int N, m , n, min, x;
    scanf ("%d", &N);
    while (N--)
    {
        min = 101;
        scanf ("%d%d", &n, &m);
        while (n--)
        {
            scanf("%d", &x);
            if (x < min)
                min = x;
        }
        printf("%d\n", (100 - min) * (100 - min));
    }
    return 0;
}

