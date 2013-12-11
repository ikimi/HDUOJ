#include <stdio.h>
#include <string.h>

int isstart(char c);
int isword(char c);
char str[100];

int main()
{
    int n, length, i;
    scanf ("%d", &n);
    getchar();
    while (n--)
    {
        gets(str);
        length = strlen(str);
        if (!isstart(str[0]))
            printf("no\n");
        else
        {
            for (i = 1; i < length; i++)
                if (!isword(str[i]))
                {
                    printf("no\n");
                    break;
                }
            if (i == length)
                printf("yes\n");
        }
    }
    return 0;
}

int isstart (char c)
{
    if (c == '_' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int isword (char c)
{
    if (isstart(c) || c >= '0' && c <= '9')
        return 1;
    return 0;
}
