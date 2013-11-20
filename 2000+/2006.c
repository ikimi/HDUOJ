#include <stdio.h>

int main()
{
    int n, sum, i;
    while (scanf("%d", &n) != EOF)
    {
        sum = 1;
        while (n--)
        {
            scanf("%d", &i);
            if (i % 2)
                sum *= i;
        }
        printf("%d\n", sum);
    }
    return 0;
}
