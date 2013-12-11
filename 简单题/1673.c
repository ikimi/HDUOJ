#include <stdio.h>
#include <math.h>

int solve(int n);

int main()
{
    int t, n, i, max, min, pos[22];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        min = 101;max = -1;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &pos[i]);
            if (min > pos[i])
                min = pos[i];
            if (max < pos[i])
                max = pos[i];
        }
        printf("%d\n", (max - min) * 2);
    }
    return 0;
}
