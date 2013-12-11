#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T, n, i;
    char *data;

    data = malloc(1000);
    scanf("%d", &T);
    while (T--)
    {
        scanf("%s%d", data, &n);
        while (*data++ != '.');
        if (n > strlen(data))
            putchar('0');
        else
        {
            for (i = 1; i <= n; i++, data++);
            putchar(*--data);
        }
        putchar('\n');
    }
    return 0;
}
