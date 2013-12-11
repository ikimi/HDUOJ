#include <stdio.h>
#include <math.h>

int main()
{
    int T, n;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        printf("%d\n", (int)pow(2, n - 1) + (n - 1) * (int)pow (2, n - 2));
    }
    return 0;
}
