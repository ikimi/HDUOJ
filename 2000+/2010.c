#include <stdio.h>

int data[1000];
void init(void);

int main()
{
    int m, n, flag, i;
    init();
    while (scanf("%d%d", &m, &n) != EOF)
    {
        flag = 0;
        for (i = m; i <= n; i++)
            if (data[i])
            {
                flag = 1;
                printf("%d", i);
                break;
            }
            i++;
        for (; i <= n; i++)
            if (data[i])
            {
                flag = 1;
                printf(" %d", i);
            }
            if (!flag)
                printf("no");
        printf("\n");
    }
    return 0;
}

int shuixianhua (int i);

void init (void)
{
    int i;
    for (i = 100; i <= 999; i++)
        if (shuixianhua(i))
            data[i] = 1;
}

int shuixianhua (int i)
{
    int a, b, c, n;
    n= i;
    a = i % 10;
    i /= 10;
    b = i % 10;
    i /= 10;
    c = i;
    if (a * a * a + b * b * b + c * c * c == n)
        return 1;
    return 0;
}
