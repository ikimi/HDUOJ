#include <stdio.h>

int money[6] = {100, 50, 10, 5, 2, 1};
int sol (int x);

int main()
{
    int n, sum, x;
    while (scanf("%d", &n), n)
    {
        sum = 0;
        while (n--)
        {
            scanf ("%d", &x);
            sum += sol (x);
        }
        printf("%d\n", sum);
    }
    return 0;
}

int sol (int x)
{
    int i, sum;
    sum = 0;
    for (i = 0; i < 6;)
        if (x >= money[i])
        {
            sum += 1;
            x -= money[i];
        }
        else
            i++;
    return sum;
}
