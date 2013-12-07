#include <stdio.h>

int main()
{
    int N, x, i, j;

    scanf("%d", &N);
    while (N--)
    {
        scanf ("%d", &x);
        for (i = 1; i <= 3 * x; i++)
        {
            for (j = 1; j <= x; j++)
                printf("HDU");
            printf("\n");
        }
    }
    return 0;
}
