#include <stdio.h>

int main()
{
    int t, n, play1, play2;
    char line[10];

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        getchar();
        play1 = play2 = 0;
        while (n--)
        {
            gets(line);
            if (line[0] == 'R' && line[2] == 'P')
                play2++;
            else if (line[0] == 'P' && line[2] == 'R')
                play1++;
            else if (line[0] == 'R' && line[2] == 'S')
                play1++;
            else if (line[0] == 'S' && line[2] == 'R')
                play2++;
            else if (line[0] == 'P' && line[2] == 'S')
                play2++;
            else if (line[0] == 'S' && line[2] == 'P')
                play1++;
        }
        if (play1 > play2)
            printf("Player 1\n");
        else if (play1 < play2)
            printf("Player 2\n");
        else
            printf("TIE\n");
    }
    return 0;
}
