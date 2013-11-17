#include <stdio.h>

/*
    题目非常简单，代码也非常简单  mod 操作的重要性!
*/
int main()
{
    int k, i, tag;
    while (scanf("%d", &k) != EOF)
    {
        tag = 0;
        for (i = 1; i < 66; i++)
        {
            if ((18 + k * i) % 65 == 0)
            {
                tag = 1;
                break;
            }
        }
        if (tag)
            printf("%d\n", i);
        else
            printf("no\n");
    }
    return 0;
}
