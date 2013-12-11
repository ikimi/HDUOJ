#include <stdio.h>

int isleapyear(int year);
int month_day(int year, int month);

int main()
{
    int T, i, sum, year, month, day;
    scanf("%d", &T);

    while (T--)
    {
        sum = 0;
        scanf("%d-%d-%d", &year, &month, &day);
        if (!isleapyear(year + 18) && month == 2 && day == 29)
            printf("-1\n");
        else
        {
            //sum
            sum += month_day(year, month) - day;
            for (i = month + 1; i <= 12; i++)
                sum += month_day(year, i);
            for (i = 1; i < 18; i++)
                if (isleapyear(year + i))
                    sum += 366;
                else
                    sum += 365;
            for (i = 1; i < month; i++)
                sum += month_day(year + 18,i);
            sum += day;
            printf("%d\n", sum);
        }
    }
    return 0;
}

int isleapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

int month_day(int year, int month)
{
    int days;
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:days = 31;break;
        case 4:
        case 6:
        case 9:
        case 11:days = 30;break;
        case 2: days = isleapyear(year) ? 29 : 28;break;
    }
    return days;
}


