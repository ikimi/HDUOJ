#include <stdio.h>
#include <string.h>

int main()
{
    int C, i, len;
    char data[52], temp;

    scanf("%d", &C);
    while (C--)
    {
        scanf("%s", data);
        len = strlen(data);
        for (i = 0; i < len; i += 2)
        {
            temp = data[i];
            data[i] = data[i + 1];
            data[i + 1] = temp;
        }
        printf("%s\n", data);
    }
    return 0;
}
