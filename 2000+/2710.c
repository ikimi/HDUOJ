#include <stdio.h>

int data[20010];
void init(void);

int main()
{
    int N, x, max;

    init();
    while (scanf("%d", &N) != EOF)
    {
        max = 1;
        while (N--)
        {
            scanf("%d", &x);
            if (data[x] > data[max])
                max = x;
        }
        printf("%d\n", max);
    }
    return 0;
}

void init(void)
{
    int i, j;

    for (i = 1; i < 20010; i++)
        data[i] = 1;
    for (i = 2; i < 20010; i++)
        if (data[i] == 1)
            for (j = 1; i * j < 20010; j++)
                data[i * j] = i;
}
