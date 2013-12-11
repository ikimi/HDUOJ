#include <stdio.h>

int main()
{
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) == 3)
    {
        if (a <= 168)
         printf("CRASH %d\n", a);
        else if(b <= 168)
         printf("CRASH %d\n", b);
        else if(c <= 168)
         printf("CRASH %d\n", c);
        else
         printf("NO CRASH\n");
    }
    return 0;
}
