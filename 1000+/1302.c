#include <stdio.h>

int main()
{
    int H, U, D, F, days;
    double fatigue, distance;
    while (scanf("%d%d%d%d", &H, &U, &D, &F), H)
    {
        distance = days = 0;
        fatigue = F / 100.0 * U;
        while (distance >= 0)
        {
            distance += U - fatigue * days;
            if (distance > H)
            {
                printf("success on day %d\n", days + 1);
                break;
            }
            distance -= D;
            days++;
        }
        if (distance < 0)
            printf("failure on day %d\n", days);
    }
    return 0;
}
