/*
     比较坑的一道题 首先题目有陷阱 没有指明M N的大小
     其次 在GCC下pow不能用，而在C下可以
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b , m, n, tmp;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        a = b = 0;
        if (m > n)
        {
            tmp = m;
            m = n;
            n = tmp;
        }
        while (m <= n)
        {
            if (m % 2)
                b += pow(m, 3);
            else
                a += pow(m, 2);
            m++;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}
