#include <stdio.h>

int main()
{
    int n, hour1, hour2, min1, min2, sec1, sec2, temp, hour, min, sec;
    scanf ("%d", &n);
    while (n--)
    {
        scanf ("%d%d%d%d%d%d", &hour1, &min1, &sec1, &hour2, &min2, &sec2);
        temp = 0;
        if ((sec = sec1 + sec2 + temp) >= 60)
        {
            temp = 1;
            sec -= 60;
        }
        if ((min = min1 + min2 + temp) >= 60)
        {
            temp = 1;
            min -= 60;
        }
        hour = hour1 + hour2 + temp;
        printf("%d %d %d\n", hour, min, sec);
    }
    return 0;
}
