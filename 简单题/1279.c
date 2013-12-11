#include <stdio.h>

int main()
{
    int n, x, tag;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &x);
        tag = 0;
        while (x > 1)
        {
            if (x % 2)
            {
                if (tag)
                    printf(" %d", x);
                else
                    printf("%d", x);
                x = 3 * x + 1;
                tag = 1;
            }
            else
            {
                x /= 2;
            }
        }
        if (!tag)
            printf("No number can be output !");
        printf("\n");
    }
    return 0;
}
