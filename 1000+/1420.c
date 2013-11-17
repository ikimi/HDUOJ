#include <stdio.h>

int main()
{
    int n, A, B, C;
    long long result;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d %d", &A, &B, &C);
        result = 1;
        while (B--)
        {
            result *= A;
            result = result % C;
        }
        printf("%lld\n", result);
    }
    return 0;
}
