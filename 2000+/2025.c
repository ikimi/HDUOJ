#include <stdio.h>
#define MAX 110

char data[MAX];

int main()
{
    char max;
    int i;
    while (scanf("%s", data) != EOF)
    {
        max = '0';
        for (i = 0; data[i] != '\0'; i++)
        {
            if (data[i] > max)
                max = data[i];
        }
        for (i = 0; data[i] != '\0'; i++)
        {
            putchar(data[i]);
            if (data[i] == max)
                    printf("(max)");
        }
        printf ("\n");
    }
    return 0;
}
