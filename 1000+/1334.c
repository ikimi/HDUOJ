#include <stdio.h>

int main()
{
    int a, b, c, d, sum_a, sum_b, sum_c;
    for (a = 6; a <= 200; a++)
    {
        sum_a = a * a * a;
        for (b = 2; b < a; b++)
        {
            sum_b = b * b * b;
            for (c = b; c < a; c++)
            {
                sum_c = c * c * c;
                for (d = c; d < a; d++)
                   if (sum_a == sum_b + sum_c + d * d * d)
                    {
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
                        break;
                    }
            }
        }
    }
    return 0;
}
