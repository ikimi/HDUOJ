#include <stdio.h>

int dec(int x);
int duo(int x);
int hex(int x);

int main()
{
    int i;
    for (i = 2992; i < 10000; i++)
    {
        if (dec(i) == duo(i) && duo(i) == hex(i))
            printf("%d\n", i);
    }
    return 0;
}

int dec(int i)
{
    int sum = 0;
    while (i)
    {
        sum += (i % 10);
        i /= 10;
    }
    return sum;
}

int duo(int i)
{
    int sum = 0;
    while (i)
    {
        sum += (i % 12);
        i /= 12;
    }
    return sum;
}

int hex(int i)
{
    int sum = 0;
    while (i)
    {
        sum += (i % 16);
        i /= 16;
    }
    return sum;
}
