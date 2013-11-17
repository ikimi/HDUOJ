/*
    数论问题
    公式1：两个不同数相乘结果的root(a * b) == root(root(a)* root(b))
    公式2：一个数的root(a) == a % 9 ；注意当 a % 9 == 0时 ，root(a)=9;
*/
#include <stdio.h>

int main()
{
    int n, i, root, result;
    while (scanf("%d", &n), n)
    {
        i = 1;
        if (n % 9 == 0)
            result = root = 9;
        else
            result = root = n % 9;
        while (i++ < n)
        {
            result = (result * root) % 9;
            if (!result)
                result = 9;
        }
        printf("%d\n", result);
    }
    return 0;
}
