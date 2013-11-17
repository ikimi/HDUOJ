#include <stdio.h>

int LCD(int a, int b);
int LCM(int a, int b);

int main()
{
    int N, i, j, n, m, lcm;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        lcm = 1;
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &m);
            lcm = LCM(lcm, m);
        }
        printf("%d\n", lcm);
    }
    return 0;
}

int LCD (int a, int b)
{
    int temp;
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM (int a, int b)
{
    return a / LCD(a, b) * b; // 先乘后除 还是 先除后乘 是个问题，如果先乘后除将有可能会导致溢出
}
