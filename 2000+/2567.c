#include <stdio.h>
#include <string.h>

int main()
{
    int t, i;
    char str1[51], str2[51];

    scanf("%d", &t);
    while (t--)
    {
        scanf("%s%s", str1, str2);
        for (i = 0; i < strlen(str1) / 2; i++)
            putchar(str1[i]);
        printf("%s", str2);
        for (i = strlen(str1) / 2; i < strlen(str1); i++)
            putchar(str1[i]);
        putchar('\n');

    }
    return 0;
}
