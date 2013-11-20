#include <stdio.h>
#define runnian(x) ((x % 400 == 0) || (x % 4 == 0 && x %100 != 0))? 29 : 28;

int count(int year, int month);
int main()
{
    int year, month, day, days, i;
    while (scanf("%d/%d/%d", &year, &month, &day) != EOF)
    {
        days = 0;
        for (i = 1; i < month; i++)
        {
            days += count(year, i);
        }
        days += day;
        printf("%d\n", days);
    }
    return 0;
}

int count(int year, int month)
{
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 2: return runnian(year);
        default: return 30;
    }
}
