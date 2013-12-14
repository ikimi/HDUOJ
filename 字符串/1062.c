#include <stdio.h>
#include <string.h>

char data[1010];
void reverse(int start, int end);
int isspaces(char x);

int main()
{
    int T, i, j, len;

    scanf("%d", &T);
    getchar();
    while (T--)
    {
        gets(data);
        i = 0; len = strlen(data);
        while (i < len)
        {
            while (isspaces(data[i]) && i < len)
                i++;
            j = i + 1;
            while (!isspaces(data[j]) && j < len)
                j++;
            reverse(i, j - 1);
            i = j;
        }
        i = 0;
        puts(data);
    }
    return 0;
}

void reverse(int start, int end)
{
    int temp;

    while (start <= end)
    {
        temp = data[start];
        data[start++] = data[end];
        data[end--] = temp;
    }
}

int isspaces(char x)
{
    if (x == ' ' || x == '\t')
        return 1;
    return 0;
}
