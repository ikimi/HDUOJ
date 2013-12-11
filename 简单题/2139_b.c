/*
    正奇数平方和公式 S = n (2n - 1) (2n + 1) / 3
*/
#include <stdio.h>

int main()
{
    _int64 n;

    while (scanf("%I64d", &n) != EOF)
    {
        n = (n + 1) / 2;
        printf("%I64d\n", n * (2 * n + 1) * (2 * n - 1) / 3);
    }
    return 0;
}
