#include <stdio.h>
#include <memory.h>

int data[1000005];
void init(void);

int main()
{
    int n;

    init();
    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", data[n]);
    }
    return 0;
}

void init(void)
{
    int i, j, x;

    memset(data, 0, sizeof(data));
    for (i = 2, x = 0;i < 1000005; i++)
    {
        if (!data[i])
        {
            x++;
            for (j = 1; j * i < 1000005; j++)
                data[i * j] = x;
        }
    }
}
