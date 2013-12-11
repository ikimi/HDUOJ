#include <stdio.h>
#include <string.h>
#include <ctype.h>

char num1[100], num2[100];
int solve (char str[]);

int main()
{
    memset(num1, '\0', sizeof(num1)); memset(num2, '\0', sizeof(num2));
    while (scanf("%s%s", num1, num2) != EOF)
    {
        printf("%d\n", solve(num1) + solve(num2));
        memset(num1, '\0', sizeof(num1)); memset(num2, '\0', sizeof(num2));
    }
    return 0;
}

int solve (char str[])
{
    int num, length, i, temp;
    length = strlen(str);
    i = num = 0;
    while (i< length)
    {
        if (str[i] >= '0' && str[i] <= '9')
            num = 16 * num + str[i] - '0';
        else
        {
            str[i] = tolower(str[i]);
            switch(str[i])
            {
                case 'a': temp = 10;break;
                case 'b': temp = 11;break;
                case 'c': temp = 12;break;
                case 'd': temp = 13;break;
                case 'e': temp = 14;break;
                case 'f': temp = 15;break;
            }
            num = 16 * num + temp;
        }
        i++;
    }
    return num;
}
