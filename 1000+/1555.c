#include <stdio.h>

int main()
{
    int m, k, sum;
    while (scanf("%d %d", &m, &k), m || k)
    {
        sum = 0;
        while (m >= k)
        {
            m -= k;
            sum += k;
            m ++;
        }
        sum += m;
        printf("%d\n", sum);
    }
    return 0;
}
