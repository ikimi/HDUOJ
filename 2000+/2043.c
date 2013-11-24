#include <stdio.h>
#include <string.h>
#include <memory.h>
#define MAX 100

int type[4];
char data[MAX];

int main()
{
    int M, sum, j;
    char *i;
    scanf ("%d", &M);
    while (M--)
    {
        scanf ("%s", data);
        memset(type, 0, sizeof(type));
        if (strlen(data) >= 8 && strlen(data) <= 16)
        {
            i = data;
            while (*i)
            {
                if (*i >= 'A' && *i <= 'Z')
                    type[0] = 1;
                else if (*i >= 'a' && *i <= 'z')
                    type[1] = 1;
                else if (*i >= '0' && *i <= '9')
                    type[2] = 1;
                else
                    type[3] = 1;
                i++;
            }
            sum = 0;
            for (j = 0; j < 4; j++)
                sum += type[j];
            if (sum >= 3)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
