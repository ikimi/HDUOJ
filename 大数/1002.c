#include <stdio.h>
#include <string.h>

char a[1024], b[1024], c[1024];

int main()
{
    int T, n, len1, len2, flag, i, j, k;

    scanf("%d", &T);
    n = 1;
    while (n <= T)
    {
        scanf("%s %s", a, b);
        len1 = strlen(a);
        len2 = strlen(b);
        flag = k = 0; i = len1 - 1; j = len2 - 1;
        while (i >= 0 && j >= 0)
        {
            c[k++] = (a[i] - '0' + b[j] - '0' + flag) % 10 + '0';
            flag = (a[i--] - '0' + b[j--] - '0' + flag) / 10;
        }
        while (i >= 0)
        {
            c[k++] = (a[i] - '0' + flag) % 10 + '0';
            flag = (a[i--] - '0' + flag) / 10;
        }
        while (j >= 0)
        {
            c[k++] = (b[j] - '0' + flag) % 10 + '0';
            flag = (b[j--] - '0' + flag) / 10;
        }
        printf("Case %d:\n", n);
        printf("%s + %s = ", a, b);
        if (flag)
            printf("%d", flag);
        while (k >= 0)
            printf("%c", c[--k]);
        printf("\n");
        if (n++ != T)
            printf("\n");
    }
    return 0;
}
