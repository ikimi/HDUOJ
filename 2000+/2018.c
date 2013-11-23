/*
    显然是利用递归的思想
    对于第 n 年母牛的数量，它是怎样计算得来的呢？
    它是右 n - 1 年母牛的数量 + n - 1 年中能在下一年产仔母牛数量的总和
    前者直接可以求，后者通过分析发现，他的值== n - 3 年母牛的数量。Why?
    因为每一只母牛(除了第一只)实在出生后的第四年开始产仔，所以要想在第n年产仔
    则至少为年龄为 n - 3 的母牛!
*/
#include <stdio.h>

int data[55];
void init (void);

int main()
{
    int n;
    init ();
    while (scanf ("%d", &n), n)
    {
        if (n > 3)
            printf ("%d\n", data[n - 3] + data[n - 1]);
        else
            printf ("%d\n", data[n]);
    }
    return 0;
}

void init (void)
{
    int i;
    data[1] = 1;
    data[2] = 2;
    data[3] = 3;
    for (i = 4; i < 60; i++)
        data[i] = data[i - 3] + data[i - 1];
}
