#include <stdio.h>

int main()
{
    int m, n, flag, max_x, max_y, max, i, j, temp;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        scanf("%d", &max);
        max_x = max_y = 0;
        if (max < 0)
            flag = 0;
        else
        {
            max = - max;
            flag = 1;
        }
        for (j = 1; j < n; j++)
        {
            scanf ("%d", &temp);
            if (temp > 0)
            {
                if (-temp < max)
                {
                    max = -temp;
                    flag = 1;
                    max_y = j;
                }
            }
            else
            {
                if (temp < max)
                {
                    max = temp;
                    flag = 0;
                    max_y = j;
                }
            }
        }
        for (i = 1; i < m; i++)
            for (j = 0; j < n; j++)
            {
                scanf ("%d", &temp);
                if (temp > 0)
                {
                    if (-temp < max)
                    {
                        max = -temp;
                        flag = 1;
                        max_x = i;
                        max_y = j;
                    }
                }
                else
                {
                    if (temp < max)
                    {
                        max = temp;
                        flag = 0;
                        max_x = i;
                        max_y = j;
                    }
                }
            }
        printf("%d %d ", max_x + 1, max_y + 1);
        if (flag)
            max = -max;
        printf("%d\n", max);
    }
    return 0;
}
