#include <stdio.h>
#include <memory.h>

int data[3000];
void init (void);
int sol (int i);

int main()
{
    int x, y, i;
    init ();
    while (scanf("%d%d", &x, &y), x || y)
    {
        for (i = x; i <= y; i++)
            if (!sol (i))
                break;
        if (i > y)
            printf("OK\n");
        else
            printf("Sorry\n");
    }
    return 0;
}

int result (int n)
{
    return (n * n + n + 41);
}

void init (void)
{
    int i, j;
    memset(data, 1, sizeof (data));
    for (i = 2; i < 3000; i++)
        if (data[i])
        {
            for (j = 2; i * j < 3000; j++)
                if (data[i * j])
                    data[i * j] = 0;
        }
}

int sol (int i)
{
    if (data[result(i)])
        return 1;
    return 0;
}
