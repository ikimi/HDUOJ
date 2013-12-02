#include <stdio.h>
#include <memory.h>

int data[10001];
void init();

int main()
{
    int n, num, i;

    init();
    while (scanf("%d", &n), n)
    {
        num = 0;
        for (i = 2; i < n / 2; i++)
        {
            if (data[i] && data[n - i])
                num++;
        }
        printf("%d\n", num);
    }
    return 0;
}

void init()
{
    int i, j;

    memset(data, 1, sizeof(data));
    for (i = 2; i <= 10000; i++)
    {
        if (data[i])
        {
            for (j = 2; i * j <= 10000; j++)
                if (data[i * j])
                    data[i * j] = 0;
        }
    }
}
