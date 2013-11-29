#include <stdio.h>

int main()
{
    int N, A, B;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d%d", &A, &B);
        if (A % B)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
