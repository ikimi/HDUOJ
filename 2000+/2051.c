#include <stdio.h>

void solve (int x);
int main()
{
    int n;
    while (scanf ("%d", &n) != EOF)
    {
        solve(n);
        printf("\n");
    }
    return 0;
}

void solve (int x)
{
    if (!x)
        return ;
    solve(x / 2);
    printf("%d", x % 2);
}
