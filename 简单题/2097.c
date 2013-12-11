#include <stdio.h>

int sol(int n, int lap);
int main()
{
    int n;
    while (scanf("%d", &n), n)
    {
        if (sol(n, 10) == sol(n, 12) && sol(n, 10) == sol(n, 16))
            printf("%d is a Sky Number.\n", n);
        else
            printf("%d is not a Sky Number.\n", n);
    }
    return 0;
}

int sol(int n, int lap)
{
    int sum = 0;

    while (n)
    {
        sum += n % lap;
        n /= lap;
    }
    return sum;
}
