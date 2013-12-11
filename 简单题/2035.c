#include <stdio.h>

int main()
{
    int A, B, result;
    while (scanf ("%d%d", &A, &B), A || B)
    {
        result = 1;
        while (B--)
        {
            result = result * A % 1000;
        }
        printf("%d\n", result);
    }
    return 0;
}
