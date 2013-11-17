#include <stdio.h>

/*
    水题 判断闰年
*/
int isleapyear(int year);

int main()
{
    int T, start, N, i, n;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &start, &N);
        n = 0;
        for (i = start;;i++)
        {
            if(isleapyear(i))
            {
                if (++n == N)
                    break;
            }
        }
        printf("%d\n", i);
    }
    return 0;
}

int isleapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}
