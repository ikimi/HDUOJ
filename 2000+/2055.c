#include <stdio.h>

int main()
{
    int t, y, sum;
    char c;
    scanf ("%d", &t);
    while (t--)
    {
        getchar();
        scanf ("%c%d", &c, &y);
        sum = 0;
        if (c >= 'a' && c <= 'z')
            sum = -1 * (c - 'a' + 1);
        else
            sum = c - 'A' + 1;
        sum += y;
        printf("%d\n", sum);
    }
    return 0;
}
