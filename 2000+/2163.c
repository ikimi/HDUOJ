#include <stdio.h>
#include <memory.h>

int data[16010];
void init(void);

int main()
{
    int n, count = 0;

    init();
    while (scanf("%d", &n), n > 0)
    {
        printf("%d: ", ++count);
        if (data[n])
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}

void init(void)
{
    int i, j;

    memset(data, 1, sizeof(data));
    for (i = 2; i < 16010; i++)
    if (data[i])
        for (j = 2; i * j < 16010; j++)
            data[i * j] = 0;
    data[1] = data[2] = 0;
}
