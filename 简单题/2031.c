#include <stdio.h>
#include <string.h>
#define MAX 100

char data[MAX];

int main()
{
    int N, R, i, temp, sign;
    char c;
    while (scanf ("%d%d", &N, &R) != EOF)
    {
        memset(data, '\0', sizeof(data));
        if (N < 0)
            sign = -1;
        else
            sign = 1;
        i = 0;
        while (N)
        {
            temp = N % R;
            if (temp < 0)
                temp *= -1;
            switch (temp)
            {
                case 10: c = 'A'; break;
                case 11: c = 'B'; break;
                case 12: c = 'C'; break;
                case 13: c = 'D'; break;
                case 14: c = 'E'; break;
                case 15: c = 'F'; break;
                default: c = temp + '0'; break;
            }
            data[i++] = c;
            N /= R;
        }
        if (sign == -1)
            printf("-");
        for (i--; i >=0;i--)
            printf("%c", data[i]);
        printf("\n");
    }
    return 0;
}
