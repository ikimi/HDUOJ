#include <stdio.h>

int husu(int a, int b);

int main()
{
    int t, a, b, i;

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &a, &b);
        if (a == b)
            printf("%d\n", 2 * b);
        else
        {
            for (i = 2; i < a / b; i++)
                if (husu(i, a / b))
                    break;
            printf("%d\n", i * b);
        }
    }
    return 0;
}

int husu(int a, int b)
{
    int temp;

    while (a)
    {
        temp = b % a;
        b = a;
        a = temp;
    }
    if (b == 1)
        return 1;
    return 0;
}
