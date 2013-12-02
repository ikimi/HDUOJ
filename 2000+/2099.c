#include <stdio.h>

int main()
{
    int a, b, i, flag;

    while (scanf("%d%d", &a, &b), a || b)
    {
        flag = 0;
        for (i = 0; i < 100; i++)
            if (!((a * 100 + i) % b))
            {
                if (i < 10)
                    printf(flag ? " 0%d" : "0%d", i);
                else
                    printf(flag ? " %d" : "%d", i);
                flag = 1;
            }
        printf("\n");
    }
    return 0;
}
