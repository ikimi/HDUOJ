#include <stdio.h>
#include <string.h>

char data[30];
int yuanyin(char x);

int main()
{
    int flag[5], len, i;

    while (scanf("%s", data), strcmp("end", data))
    {
        memset(flag, 0, sizeof(flag));
        len = strlen(data); i = 0;
        while (i < len)
        {
            if (yuanyin(data[i]))
            {
                flag[0] = 1;
                if (++flag[1] >= 3)
                {
                   flag[4] = 1;
                   break;
                }
                flag[2] = 0;
            }
            else
            {
                if (++flag[2] >= 3)
                {
                    flag[4] = 1;
                    break;
                }
                flag[1] = 0;
            }
            if (data[i] == flag[3])
            {
                if (data[i] == 'e' || data[i] == 'o')
                    flag[3] = data[i];
                else
                {
                    flag[4] = 1;
                    break;
                }
            }
            else
            {
                flag[3] = data[i];
            }
            i++;
        }
        if (!flag[0] || flag[4])
            printf("<%s> is not acceptable.\n", data);
        else
            printf("<%s> is acceptable.\n", data);
    }
    return 0;
}

int yuanyin(char x)
{
    switch (x)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return 1;
    }
    return 0;
}
