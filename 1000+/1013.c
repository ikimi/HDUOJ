#include <stdio.h>
#include <string.h>

int main()
{
    char digits[10000];
    int i, sum;
    memset(digits, '\0', 10000);
    while (scanf("%s", digits) != EOF)
    {
        if (digits[0] == '0')
            break;
        sum = 0;
        for (i = 0; i < strlen(digits); i++)
            sum += digits[i] - '0';
        if (sum % 9 == 0)
            printf("9\n");
        else
            printf("%d\n", sum % 9);
        memset(digits, '\0', 10000);
    }
    return 0;
}
