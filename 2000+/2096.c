#include <stdio.h>

int main()
{
    int A, B, T;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &A, &B);
        if (A >= 100)
            A %= 100;
        if (B >= 100)
            B %= 100;
        printf("%d\n", (A + B) % 100);
    }
    return 0;
}
