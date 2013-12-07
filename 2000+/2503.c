#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int N, a, b, c, d, n;

    scanf("%d", &N);
    while (N--)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        n = gcd(a * d + b * c, b * d);
        printf("%d %d\n", (a * d + b * c) / n, (b * d) / n);
    }
    return 0;
}

int gcd(int a, int b)
{
    int temp;

    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (b)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}
