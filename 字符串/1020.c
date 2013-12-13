#include <stdio.h>
#include <string.h>

char data[1010];
int main()
{
    int T, i, j, len;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%s", data);
        len = strlen(data);
        for (i = 0; i < len;)
        {
            for (j = i + 1; data[i] == data[j] && j < len; j++);
            if (j >= len)
            {
                if (j - i > 1)
                    printf("%d%c", j - i, data[i]);
                else
                    printf("%c", data[i]);
                printf("\n");
                break;
            }
            else
            {
                if (j - i > 1)
                    printf("%d%c", j - i, data[i]);
                else
                    printf("%c", data[i]);
                i = j;
            }
        }
    }
    return 0;
}
