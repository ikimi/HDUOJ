#include <stdio.h>

int main()
{
    int n, i, ans;
    while(scanf("%d", &n) != EOF)
    {
        if (n == 1 || n % 2 == 0)
            printf("2^? mod %d = 1\n", n);
        else
        {
            for (i = 1, ans = 2;;i++,ans = (ans * 2) % n)
                if (ans % n == 1)
                {
                    printf("2^%d mod %d = 1\n", i, n);
                    break;
                }
        }
    }
    return 0;
}
