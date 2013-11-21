#include <stdio.h>

int main()
{
    int n, sum, c;
    scanf ("%d", &n);
    getchar();
    while (n--)
    {
        sum = 0;
        while ((c = getchar()) != '\n')
        {
            if (c >= '0' && c <= '9')
                sum++;
        }
        printf("%d\n", sum);
    }
    return 0;
}
