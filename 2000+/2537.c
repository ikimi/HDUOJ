#include <stdio.h>

int main()
{
    int N, Y, R;
    char c;

    while (scanf("%d", &N), N)
    {
        Y = R = 0;
        getchar();
        while (--N)
        {
            c = getchar();
            if (c == 'R')
                R++;
            if (c == 'Y')
                Y++;
        }
        if ((c = getchar()) == 'B')
        {
            if (R < 7)
                printf("Yellow\n");
            else
                printf("Red\n");
        }
        else
        {
            if (Y < 7)
                printf("Red\n");
            else
                printf("Yellow\n");
        }
    }
    return 0;
}
