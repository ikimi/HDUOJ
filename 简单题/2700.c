#include <stdio.h>
#include <string.h>

int main()
{
    char data[35];
    int n, i;

    while (scanf("%s", data), strcmp(data, "#"))
    {
        for (i = n = 0; i < strlen(data) - 1; i++)
        {
            putchar(data[i]);
            if (data[i] == '1')
                n++;
        }
        if ((n % 2 && data[i] == 'e') || (!(n % 2) && data[i] == 'o'))
            putchar('1');
        else
            putchar('0');
        putchar('\n');
    }
    return 0;
}
