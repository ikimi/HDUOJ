/*
    方法一：利用公式  立方和为 [n*(n+1)/2]^2
    方法二：暴力法 朴素的暴力法肯定会超时的，所以我们必须将部分结果保存起来，并且对输入n做适当的处理
            进而减少循环次数
            10000大小的数组用来存放 1...10000的立方和（注意细节 不要溢出）
            对于任意的n 若n<=10000直接输出数组相应的值就可以了
            若n>10000 先 n 除 10000然后将用其结果与数组的第10000元素相乘 最后加上n 模 10000相应的数组元素
            上述操作基于最后四位每10000呈周期性变化
*/
#include <stdio.h>
#include <math.h>

int data[10001];
void init(void);

int main()
{
    int n, sum, i;

    init();
    while (scanf("%d", &n) != EOF)
    {
        sum = (n / 10000) * data[10000] + data[n % 10000];
        sum %= 10000;
        i = sum; n = 4;
        if (i)
        {
            while (i)
            {
                i /= 10;
                n--;
            }
            for (i = 0; i < n; i++)
                printf("0");
            printf("%d\n", sum);
        }
        else
            printf("0000\n");
    }
    return 0;
}

void init(void)
{
    int i;
    data[1] = 1;
    data[2] = 9;
    for (i = 3; i <= 9999; i++)
        data[i] = (data[i - 1] + ((i * i) % 10000 * i) % 10000) % 10000;
    data[10000] = data[9999];
}
