#include <stdio.h>

int main()
{
    int data[1000], n, i, target, sum;
    while (scanf("%d", &n) ,n)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &data[i]);
        scanf("%d", &target);
        sum = 0;
        for (i = 0; i < n; i++)
            if (target == data[i])
                sum++;
        printf("%d\n", sum);
    }
    return 0;
}
