#include <stdio.h>

char data[12];

int main()
{
    int T;
    char *s;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%s", data);
        printf("6");
        s = &data[5];
        while (*++s)
        {
            printf("%c", *s);
        }
        printf("\n");
    }
    return 0;
}
