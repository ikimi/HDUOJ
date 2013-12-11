/*
    素数打表 :超时算法
*/
#include <stdio.h>
#include <memory.h>

int data[1000001];
int pre[1000001];
int init(void);

int main()
{
    int n, i, num, x;

    num = init();
    while (scanf("%d", &n) != EOF)
    {
        x = n;
        while (n!=1)
        {
            for (i = 1; i < num; i++)
                if (!(n % pre[i]))
                {
                    x = pre[i];
                    n /= pre[i];
                    break;
                }
        }
        for (i = 0; i < num; i++)
            if (pre[i] == x)
            {
                printf("%d\n", i);
                break;
            }
    }
    return 0;
}

int init(void)
{
    int i, j, k;

    memset(data, 1, sizeof(data));
    pre[0] = 1;
    for (i = 2, k = 1; i < 1000001; i++)
        if (data[i])
        {
            pre[k++] = i;
            for (j = 2; i * j < 1000001; j++)
                if (data[i * j])
                    data[i * j] = 0;
        }

    return k;
}
