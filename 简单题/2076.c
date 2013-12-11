#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    double hour, minute, second, sum_hour, sum_minute, time;

    scanf ("%d", &N);
    while (N--)
    {
        scanf("%lf%lf%lf", &hour, &minute, &second);
        if (hour >= 12)
            hour -= 12;
        sum_hour = hour / 12 * 360 + minute / 60 * 30 + second / 3600 * 30;
        sum_minute = minute / 60 * 360 + second / 60 * 6;
        if ((time = sum_hour - sum_minute) < 0)
            time = -time;
        if (time <= 180)
            printf("%d\n", (int)time);
        else
            printf("%d\n", (int)(360 - time));
    }
    return 0;
}
