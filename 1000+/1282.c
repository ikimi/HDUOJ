#include <stdio.h>
int huiwen(int n);

int main()
{
    int n, m, data[10000], i, j;
    while (scanf("%d", &n) != EOF)
    {
        i = 0;
        m = huiwen(n);
        data[0] = n;
        while (m != n)
        {
            n += m;
            m = huiwen(n);
            data[++i] = n;
        }
        printf("%d\n", i);
        j = 0;
        while (j < i)
        {
            printf("%d--->", data[j++]);
        }
        printf("%d\n", data[j]);
    }
    return 0;
}

int huiwen(int n)
{
    int sum = 0, m;
    while (n)
    {
        m = n % 10;
        sum = sum * 10 + m;
        n /= 10;
    }
    return sum;
}
