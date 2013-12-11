#include <stdio.h>

int months[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
int days(int year, int month, int day);
int leapyear(int year);

int main()
{
    int year, month, day, sum, n;

    sum = days(2007, 11, 17);
    while (scanf("%d%d%d", &year, &month, &day) != EOF)
    {

        if (year <= 0 || year >= 10000 || month <= 0 || month >= 13 || day <= 0 || day >= 32)
        {
            printf("illegal\n");
            continue;
        }
        if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30))
        {
            printf("illegal\n");
            continue;
        }
        if (month == 2)
        {
            if (leapyear(year))
            {
                if (day > 29)
                {
                    printf("illegal\n");
                    continue;
                }
            }
            else
            {
                if (day > 28)
                {
                    printf("illegal\n");
                    continue;
                }
            }
        }
        if ((n = days(year, month, day) - sum) < 0)
            n = n % 7 + 7;
        else
            n = n % 7;
        switch(n)
        {
            case 0: printf("Saturday\n");break;
            case 1: printf("Sunday\n");break;
            case 2: printf("Monday\n");break;
            case 3: printf("Tuesday\n");break;
            case 4: printf("Wednesday\n");break;
            case 5: printf("Thursday\n");break;
            case 6: printf("Friday\n");break;
        }
    }
    return 0;
}

int days(int year, int month, int day)
{
    int i, j;

    for (i = 1; i < year; i++)
        if (leapyear(i))
            day += 366;
        else
            day += 365;
    if (leapyear(year))
        i = 1;
    else i = 0;
    for (j = 1; j < month; j++)
        day += months[i][j];

    return day;
}

int leapyear(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return 1;
    return 0;
}
