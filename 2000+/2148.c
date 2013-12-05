#include <stdio.h>

int main()
{
    int score[1010], n, m, T, i, num;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &n, &m);
        for (i = 1; i <= n; i++)
            scanf("%d", &score[i]);
        for (i = 1, num = 0; i <= n; i++)
            if (score[i] > score[m])
                num++;
        printf("%d\n", num);
    }
    return 0;
}
