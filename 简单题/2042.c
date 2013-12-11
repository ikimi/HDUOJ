#include <stdio.h>

int main()
{
    int n, m, sum;
    scanf ("%d", &n);
    while (n--)
    {
        scanf ("%d", &m);
        sum = 3;
        while (m--)
            sum = 2 * (sum - 1);
        printf("%d\n", sum);
    }
    return 0;
}
