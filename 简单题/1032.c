#include <stdio.h>

/*
    输入的两个整数 i， j需要判断大小；否则会wa；
    同时不需考虑溢出问题，因为题目中已经告诉所有结果不会溢出
*/
int main()
{
    int i, j, k, x, temp, max, count,a, b;
    while (scanf("%d%d", &i, &j) == 2)
    {
        a = i;
        b = j;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        max = 0;
        for (k = a; k <= b; k++)
        {
            x = k;
            count = 0;
            while(x != 1)
            {
               if (x % 2)
                {
                    x = 3 * x + 1;
                    count++;
                }
                else
                {
                    x = x /2;
                    count++;
                }
            }
            if (++count > max)
                max = count;
        }
        printf("%d %d %d\n", i, j, max);
    }
    return 0;
}
