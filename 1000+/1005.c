#include <stdio.h>

int main()
{
    int A, B, n, f[10000], i;
    f[1] = 1;f[2] = 1;

    while ( scanf("%d %d %d", &A, &B, &n) != EOF )
    {
        if (A == 0 && B == 0 && n == 0)
            break;
        for (i = 3;i < 10000;i++)
        {
            f[i] = (f[i-1] * A + f[i -2] * B) % 7;
            if (f[i] == 1)
                if(f[i - 1] == 1)
                    break;
        }
        n = n % (i - 2);
        f[0] = f[i - 2];
        printf("%d\n", f[n]);
    }
    return 0;
}
