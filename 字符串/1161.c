#include <stdio.h>
#define tolower(x) x >= 'A' && x <= 'Z' ? x + 32 : x

int main()
{
    char str[1010];
    int i;

    while (gets(str))
    {
        i = 0;
        while (str[i])
        {
            putchar(tolower(str[i]));
            i++;
        }
        putchar('\n');
    }
    return 0;
}
