/*
    第一思路是暴力法 快排输入然后再遍历找个数为奇数的数 结果果断超时了
    论坛上使用异或操作性质 a^b^a = b来计算 不用遍历 AC
    同时注意到 0 ^ a = a 所以初始化res为 0
*/
#include <stdio.h>

int main()
{
    int n, x, res;
    while (scanf("%d", &n), n)
    {
        res = 0;
        while (n--)
        {
            scanf("%d", &x);
            res ^= x;
        }
        printf("%d\n", res);
    }
    return 0;
}
