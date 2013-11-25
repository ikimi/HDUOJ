#include <stdio.h>

int main()
{
    int n, i, flag;
    while (scanf ("%d", &n) != EOF)
    {
        i = 1; flag = -1;
        while (i <= n)
            if (!(n % i++))
                flag *= -1;
        if (flag < 0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
