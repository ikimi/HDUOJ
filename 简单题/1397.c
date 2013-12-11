#include <stdio.h>
#include <math.h>
#include <memory.h>

/* 第一遍果断超时啊*/
/*
int sushu(int i);
int main()
{
    int n, i, mid, count;
    while (scanf("%d", &n), n)
    {
        mid  = n/2;
        count = 0;
        for (i = 2; i < mid; i++)
            if (sushu(i) && sushu(n - i))
                count++;
        if (sushu(mid))
            count++;
        printf("%d\n", count);
    }
    return 0;
}

int sushu(int s)
{
    int i, mid = sqrt(s);
    for (i = 2; i <= mid; i++)
        if (!(s % i))
            return 0;
    return 1;
}
*/
// 生成素数表

int flag[32768];
int creatPrime();

int main()
{
    int n, mid, i, count;
    creatPrime();
    while (scanf("%d", &n), n)
    {
        mid = n / 2;
        count = 0;
        for (i = 2; i <= mid; i++)
            if (flag[i] && flag[n-i])
                count++;
        printf("%d\n", count);
    }
    return 0;
}

int creatPrime()
{
    int i, j;
    memset(flag, 1, sizeof(flag));
    flag[2] = flag[3] = flag[5] = flag[7] = 1;
    for (i = 2; i < 32768; i++)
        if (flag[i])
            for (j = 2; i * j < 32768; j++)
                flag[i * j] = 0;
    return 0;
}
