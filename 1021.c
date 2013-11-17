#include <stdio.h>
#include <memory.h>

int main()
{
    int n, i, f[1000001];
    memset(f, 0, sizeof(f));
    f[0] = 7 % 3;
    f[1] = 11 % 3;
    for (i = 2; i <= 1000001; i++)
        f[i] = (f[i - 1] + f[i - 2]) % 3;
    while (scanf("%d", &n))
    {
        if (f[n] == 0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
