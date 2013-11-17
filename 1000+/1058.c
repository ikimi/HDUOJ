#include <stdio.h>
#include <memory.h>

int data[6000];
int solve1();
int solve2();
int min_four(int a, int b, int c, int d);
int min(int a, int b);

int main()
{
    int n;
 //  solve1();
    solve2();
    while (scanf("%d", &n) == 1)
    {
        if (!n)
            break;
        else
        {
            if (n % 10 == 1 && n % 100 != 11)
                printf("The %dst humble number is %d.\n", n, data[n]);
            else if (n % 10 == 2 && n % 100 != 12)
                printf("The %dnd humble number is %d.\n", n, data[n]);
            else if (n % 10 == 3 && n % 100 != 13)
                printf("The %drd humble number is %d.\n", n, data[n]);
            else
                printf("The %dth humble number is %d.\n", n, data[n]);
        }
    }
    return 0;
}

/*
    蛮力法检查1- 2000000000之间的数 是否是只有2，3，5，7的因子
    但是时间复杂度极高 超时！！
*/
int solve1()
{
    int i, j, k;
    for (i = 1, j = 1; i < 2000000000; i++)
    {
        k = i;
        while (k != 1)
        {
            if (k % 2 == 0)
                k /= 2;
            else if (k % 3 == 0)
                k /= 3;
            else if (k % 5 == 0)
                k /= 5;
            else if (k % 7 == 0)
                k /= 7;
            else
                break;
        }
        if (k == 1)
            data[j++] = i;
    }
    return 0;
}

/*
    直接生成5842个，满足条件的数 常数时间的复杂度
    原理：如果将满足条件的数列按大小递增的顺序排列，那么
        数列后面的数一定可以由前面的某个数 与 （2 3 5 7）的乘积表示
        而前面的某个数 又可以由其前面的某个数 与(2 3 5 7)的乘积表示
*/
int solve2()
{
    int i, l1, l2, l3, l4;
    data[1] = 1;
    l1 = l2 = l3 = l4 = 1;
    for (i = 2; i <= 5842; i++)
    {
        data[0] = min_four(data[l1] * 2, data[l2] * 3, data[l3] * 5, data[l4] * 7);
        if (data[0] == data[l1] * 2)
            l1++;
        if (data[0] == data[l2] * 3)
            l2++;
        if (data[0] == data[l3] * 5)
            l3++;
        if (data[0] == data[l4] * 7)
            l4++;
        data[i] = data[0];
    }
    return 0;
}

int min_four(int a, int b, int c, int d)
{
    return min(min(a, b), min(c, d));
}

int min(int a, int b)
{
    if (a > b)
        return b;
    return a;
}





