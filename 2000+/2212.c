/*
    缩小范围：满足条件的数只能是在0 - 10000000之间
*/
#include <stdio.h>

int data[10];
void init(void);

int main()
{
    int i, j, sum;

    init();
    for (i = 1; i < 10000000; i++)
    {
        sum = 0; j = i;
        while (j)
        {
            sum += data[j % 10];
            j /= 10;
        }
        if (sum == i)
            printf("%d\n", i);
    }
    return 0;
}

void init(void)
{
    int i;
    data[0] = data[1] = 1;
    for (i = 2; i < 10; i++)
        data[i] = i * data[i - 1];
}
