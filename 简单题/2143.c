#include <stdio.h>

int main()
{
    _int64 a, b, c;

    while (scanf("%I64d%I64d%I64d", &a, &b, &c) != EOF)
    {
        if ((a == b + c) || (b == a + c) || (c == a + b))
            printf("oh,lucky!\n");
        else if ((a == b * c) || (b == a * c) || (c == a * b))
            printf("oh,lucky!\n");
        else if ((a && (b % a == c || c % a == b)) || (b && (a % b == c || c % b == a)) || (c && (a % c == b || b % c == a)))
            printf("oh,lucky!\n");
        else
            printf("what a pity!\n");
    }
    return 0;
}
