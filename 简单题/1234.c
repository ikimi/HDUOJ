#include <stdio.h>
#include <string.h>

int main()
{
    int T, M, time, first_time, last_time, come_hour, come_minute, come_second, left_hour, left_minute, left_second;
    char first[20], last[20], number[20];

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &M);
        first_time = 86400;
        last_time = 0;
        while (M--)
        {
            scanf("%s%d:%d:%d%d:%d:%d", number, &come_hour, &come_minute, &come_second, &left_hour, &left_minute, &left_second);
            time = come_hour * 3600 + come_minute * 60 + come_second;
            if (time <= first_time)
            {
                first_time = time;
                strcpy(first, number);
            }
            time = left_hour * 3600 + left_minute * 60 + left_second;
            if (time >= last_time)
            {
                last_time = time;
                strcpy(last, number);
            }
        }
        printf("%s %s\n", first, last);
    }
    return 0;
}
