#include <stdio.h>
#include <math.h>

int main()
{
    int t, n, i;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        i = 1;
        while (n > pow(i * (i + 1)/2, 2))
            i++;
        printf("%d\n", i);
    }
    return 0;
}
