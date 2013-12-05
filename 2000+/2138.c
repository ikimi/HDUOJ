#include <stdio.h>
#include <math.h>

int judge(int x);

int main()
{
    int n, x, sum;

    while (scanf("%d", &n) != EOF)
    {
        sum = 0;
        while (n--)
        {
            scanf("%d", &x);
            if (judge(x))
                sum ++;
        }
        printf("%d\n", sum);
    }
    return 0;
}

int judge(int x)
{
    int i;

    for (i = 2; i <= sqrt(x); i++)
        if (!(x % i))
            return 0;
    return 1;
}
