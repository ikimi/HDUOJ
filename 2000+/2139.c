/*
    超时算法
*/
#include <stdio.h>

int main()
{
    int n, i, sum;

    while (scanf("%d", &n) != EOF)
    {
        for (i = 1, sum = 0; i <= n; i += 2)
            sum += i * i;
        printf("%d\n", sum);
    }
    return 0;
}
