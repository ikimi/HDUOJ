#include <stdio.h>
#include <string.h>

int main()
{
    int n, length, i, start, end, temp;
    char data[100];
    scanf("%d\n", &n);
    while (n--)
    {
        gets(data);
        length = strlen(data);
        for (i = length - 1; i >= 0 && data[i] == '0'; i--)
            ;
        end = i;
        start = 0;
        if (data[0] == '-')
            start = 1;
        for (; start <= end; start++, end--)
        {
            temp = data[start];
            data[start] = data[end];
            data[end] = temp;
        }
        puts(data);
    }
    return 0;
}
