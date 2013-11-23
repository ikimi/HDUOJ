/*
    求最大公约数用欧几里德算法
    在求最小公倍数的时候注意应该先除后乘 否则会溢出！
*/
#include <stdio.h>

int gcd (int x, int y);
int lcm (int x, int y);

int main()
{
    int n, x, y;
    while (scanf("%d", &n) != EOF)
    {
        scanf("%d", &x);
        while (--n)
        {
            scanf ("%d", &y);
            x = lcm(x, y);
        }
        printf("%d\n", x);
    }
    return 0;
}

int gcd (int x, int y)
{
    int temp;
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    while (x)
    {
        temp = x;
        x = y % x;
        y = temp;
    }
    return y;
}

int lcm (int x, int y)
{
    return x / gcd (x, y) * y;
}
