/*
    本来以为题目很简单（其实确实很简单），但是上来就没思路 用了递归，果断超时
    感觉应该用DP
    收到网上答案的启发，题目可以转换为求组合数C(n,m)，为什么呢？
    不妨将n个数按从小到达排序 1， 2， 3,... ，n
    从中选m个数从小到达排列，其形式就是要求解问题的一次遍历，共有多少个这样的遍历呢？
    答案就是组合数C(n,m)! 问题转化果然非常牛!
    C(n, m) = C(n - 1，m - 1) + C(n - 1, m);这样就可以用DP的思想来做了！
*/

#include <stdio.h>
#include <memory.h>

#define MAX 2011
#define mod %

int data[MAX][MAX], m, n;
void init();

int main()
{
    int T;
    init();
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &m, &n);
        printf("%d\n", data[n][m]);
    }
    return 0;
}

void init()
{
    int i, j;
    memset(data, 0, sizeof(data));
    for (i = 1; i <= 2010; i++)
    {
        data[i][i] = 1;
        data[i][1] = i mod 1007;
    }
    for (i = 3; i <= 2010; i++)
        for (j = 2; j < i; j++)
            data[i][j] = (data[i - 1][j - 1] + data[i - 1][j]) mod 1007;
}
