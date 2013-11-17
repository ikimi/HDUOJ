#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, j, length, max, count[1000];
    char colors[1000][16], color[16], blank[1];
    while (scanf("%d", &N) != EOF && N != 0)
    {
        memset(count, 0, sizeof(int) * 1000);
        memset(color, '\0', 16);
        memset(colors, '\0', 16000);

        length = 0;
        max = 0;
        gets(blank);
        for (i = 0;i < N;i++)
        {
            gets(color);
            j = 0;
            while (j < length)
            {
                if (strcmp(color, colors[j]))
                    j++;
                else
                {
                    count[j] += 1;
                    if (count[max] < count[j])
                        max = j;
                    break;
                }
            }
            if (j == length)
            {
                strcpy(colors[j], color);
                count[j] += 1;
                length++;
            }
        }
        printf("%s\n", colors[max]);
    }
    return 0;
}





