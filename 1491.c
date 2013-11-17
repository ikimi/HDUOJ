#include <stdio.h>

int cal(int month, int day);

int main()
{
    int n, month, day, mark, temp;
    mark = cal(10, 21);
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &month, &day);
        temp = mark - cal(month, day);
        if (temp > 0)
            printf("%d\n", temp);
        else if (temp < 0)
            printf("What a pity, it has passed!\n");
        else
            printf("It's today!!\n");
    }
    return 0;
}

int month_day(int month);

int cal(int month, int day)
{
    int days = 0, i;
    for (i = 1; i < month; i++)
        days += month_day(i);
    days += day;
    return days;
}

int month_day(int month)
{
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:return 31;
        case 4:
        case 6:
        case 9:
        case 11:return 30;
        case 2:return 28;
    }
    return -1;
}
