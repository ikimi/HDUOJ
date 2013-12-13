#include <stdio.h>
#include <memory.h>
#define MAX 50000

int main()
{
    int i, j, n, temp, flag, len, data[MAX];

    while (scanf("%d", &n) != EOF)
    {
        if (!n)
            printf("1\n");
        else
        {
            memset(data, 0, sizeof(data));
            data[0] = 1;
            for (i = len = 1; i <= n; i++)
            {
                for (j = flag = 0; j < len; j++)
                {
                    temp = data[j] * i + flag;
                    data[j] = temp % 10;
                    flag = temp / 10;
                }
                while (flag)
                {
                    data[j++] = flag % 10;
                    flag /= 10;
                    len++;
                }
            }
            i = MAX - 1;
            while (!data[i])
                i--;
            while (i >= 0)
                printf("%d", data[i--]);
            printf("\n");
        }
    }
    return 0;
}
