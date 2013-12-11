#include <stdio.h>
#include <string.h>

char data[100];
void print(int n);
void reverse(void);

int main()
{
    int n;

    while (scanf("%s%d", data, &n) != EOF)
    {
        while (n < 0)
            n += 8;
        if ((n %= 8) > 3)
        {
            reverse();
            n -= 4;
        }
        print(n);
    }
    return 0;
}

void print(int n)
{
    int i, j, length = strlen(data);

    if (!n)
        puts(data);
    if (n == 1)
    {
        for (i = 0; i < length; i++)
        {
            for (j = 0; j < length - i - 1; j++)
                printf(" ");
            printf("%c\n", data[length - i - 1]);
        }
        return ;
    }
    if (n == 2)
    {
        for (i = 0; i < length; i++)
        {
            for (j = 0; j < length / 2; j++)
                printf(" ");
            printf("%c\n", data[length - i - 1]);
        }
        return ;
    }
    if (n == 3)
    {
        for (i = 0; i < length; i++)
        {
            for (j = 0; j <i; j++)
                printf(" ");
            printf("%c\n", data[length - i - 1]);
        }
        return ;
    }
}

void reverse(void)
{
    int i, length;
    char temp;

    length = strlen(data);
    for (i = 0; i <= length / 2; i++)
    {
        temp = data[i];
        data[i] = data[length - i - 1];
        data[length - i - 1] = temp;
    }
}
