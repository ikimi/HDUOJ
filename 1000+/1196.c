#include <stdio.h>
#include <math.h>

int main()
{
    int t, i;
    while (scanf("%d", &t), t)
    {
        i = 0;
        while (t)
        {
            if (t % 2)
            {
                printf("%d\n", (int)pow(2, i));
                break;
            }
            t /= 2;
            i++;
        }
    }
    return 0;
}
