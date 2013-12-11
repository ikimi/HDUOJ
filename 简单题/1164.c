/*
    水题 求一个数的素因子 先打表 然后查表即可 1次AC 打表方法主要有两种：
    方法1：采用代码的方法
    方法2：开数组 初始化为1 从 i = 2开始，当j是i的整数倍时，将data[j]的值更新为0
*/

#include <stdio.h>
#include <math.h>

int data[50000];
int init();

int main()
{
    int x, i;
    init();
    while (scanf("%d", &x) != EOF)
    {
        while (x != 1)
        {
            for (i = 0; i < 50000; i++)
            {
                if (x % data[i] == 0)
                {
                    x /= data[i];
                    if (x == 1)
                        printf("%d\n", data[i]);
                    else
                        printf("%d*", data[i]);
                    break;
                }
            }
        }
    }
    return 0;
}

int init()
{
    int i, j, k, mid;
    data[0] = 2;
    data[1] = 3;
    k = 2;
    for (i = 4; i <= 32767; i++)
    {
        mid = sqrt(i);
        for (j = 2; j < mid + 1; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > mid)
            data[k++] = i;
    }
    return 0;
}
