#include <stdio.h>
#include <memory.h>

int data[5010];
void init(void);

int main()
{
    int T, a, b, temp, i, max;

    init();
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &a, &b);
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        for (i = a, max = a; i <= b; i++)
        {
            if (data[i] > data[max])
            {
                max = i;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}

void init(void)
{
    int i, j, sum;

    memset(data, 0, sizeof(data));
    data[1] = 1; data[2] = 2;
    for (i = 3; i < 5010; i++)
    {
        for (j = 2, sum = 0; j <= i / 2; j++)
            if (!(i % j))
                sum++;
        data[i] = sum + 2;
    }
}
