#include <stdio.h>
#include <string.h>
#define MAX 100

char data[MAX];
int isspaces (char c);
int iswords (char c);

int main()
{
    int i, j, length;
    while (fgets(data, MAX, stdin) != NULL)
    {
        length = strlen(data);
        for  (i = 0; i < length; i++)
        {
            while (isspaces(data[i]))
                i++;
            if (data[i] >= 'a' && data[i] <= 'z')
                data[i] = data[i] - 'a' + 'A';
            j = i + 1;
            while (iswords(data[j]))
                j++;
            i = j;
        }
        for (i = 0; i < length; i++)
            printf("%c", data[i]);
    }
    return 0;
}

int isspaces (char c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return 1;
    return 0;
}

int iswords (char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}
