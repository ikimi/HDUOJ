#include <stdio.h>

int main()
{
    int A, B;
    while (scanf("%d%d", &A, &B) != EOF)
    {
        if (A > 86)
            A %= 86;
        if (B > 86)
            B %= 86;
        if ((A + B) % 86)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}
