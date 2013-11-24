#include <stdio.h>

int solve (int x);
int main()
{
    int M, A, B;
    scanf ("%d", &M);
    while (M--)
    {
        scanf ("%d%d", &A, &B);
        if (solve(A) == B && A == solve(B))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

int solve (int x)
{
    int i, sum;
    for (i = 1, sum = 0; i < x; i++)
        if (!(x % i))
            sum += i;
    return sum;
}
