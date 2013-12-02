#include <stdio.h>
#include <math.h>

int sol(int x, int lap);
int main()
{
    int n, sum, lap, x;

    while (scanf("%d", &n) != EOF)
    {
        sum = 0;
        while (n--)
        {
            scanf("%d(%d)", &x, &lap);
            sum += sol(x, lap);
        }
        printf("%d\n", sum);
    }
    return 0;
}

int sol(int x, int lap)
{
    int i, sum;

    i = sum = 0;
    if (lap == 10)
        return x;
    while (x)
    {
        sum += (x % 10) * pow(lap, i++);
        x /= 10;
    }
    return sum;
}
