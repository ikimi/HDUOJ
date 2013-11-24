#include <stdio.h>
#include <string.h>
#define MAX 1000

char data[MAX];

int main()
{
    int n, length, i, j;
    scanf ("%d", &n);
    while (n--)
    {
        scanf ("%s", data);
        length = strlen(data);
        i = 0; j = length - 1;
        while (i < j)
        {
            if (!(data[i] == data[j]))
                break;
            else
            {
                i++; j--;
            }
        }
        if (i >= j)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
