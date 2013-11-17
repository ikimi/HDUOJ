#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        printf("%d\n", lcm(a, b));
    }
    return 0;
}

int gcd(int a, int b)
{
    int temp;
    if (a < b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    while (b)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}


