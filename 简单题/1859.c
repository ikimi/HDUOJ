#include <stdio.h>

int main()
{
    int x_min, x_max, y_min, y_max, x, y, n;
    x_min = y_min = 1000;
    x_max = y_max = -1000;
    n = 0;
    while (scanf("%d%d", &x, &y) != EOF)
    {
        if (x == 0 && y == 0 && n == 0)
            break;
        else if (x == 0 && y == 0)
        {
            printf("%d %d %d %d\n", x_min, y_min, x_max, y_max);
            n = 0;
            x_min = y_min = 1000;
            x_max = y_max = -1000;
        }
        else
        {
            if (x > x_max)
                x_max = x;
            if (x < x_min)
                x_min = x;
            if (y > y_max)
                y_max = y;
            if (y < y_min)
                y_min = y;
            n++;
        }
    }
    return 0;
}
