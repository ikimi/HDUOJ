#include <stdio.h>

int main()
{
    int n, m, price, min;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        min = 10000000;
        while (n--)
        {
            scanf("%d", &price);
            if (price < min)
                min = price;
        }
        printf("%d\n", m/min);
    }
    return 0;
}
