#include <stdio.h>

int main()
{
    int N, x, y;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d %d", &x, &y);
        if (x != y && x != y + 2)
            printf ("No Number\n");
        else
        {
            if (x % 2)
                if (y == x)
                    printf("%d\n", 2 * x - 1);
                else
                    printf("%d\n", 2 * x - 3);
            else
                if (y == x)
                    printf("%d\n", 2 * x);
                else
                    printf("%d\n", 2 * x - 2);
        }
    }
    return 0;
}
