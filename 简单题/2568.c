#include <stdio.h>

int main()
{
    int t, n, sum;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        sum = 0;
        while (n)
        {
            if (n % 2)
            {
                n--; sum++;
            }
            n /= 2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
