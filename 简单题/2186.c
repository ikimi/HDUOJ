#include <stdio.h>

int another(int x);

int main()
{
    int t, n, temp, sum;

    scanf("%d", &t);
    while (t--)
    {
        sum = 0;
        scanf("%d", &n);
        temp = n / 2;
        sum += temp / 10 + another(temp);
        n -= temp;
        temp = n / 3.0 * 2;
        sum += temp / 10 + another(temp);
        n -= temp;
        sum += n / 10 + another(n);
        printf("%d\n", sum);
    }
    return 0;
}

int another(int x)
{
    return (x % 10) ? 1 : 0;
}
