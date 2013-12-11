#include <stdio.h>

long long int data[21];
int cal();

int main()
{
    int n;
    cal();
    while (scanf("%d", &n) != EOF)
    {
        printf("%I64d\n", data[n]);
    }
    return 0;
}

int cal()
{
    int i;
    data[2] = 1;
    data[3] = 2;
    i = 4;
    while (i < 21)
    {
        data[i] = (i - 1) * (data[i - 1] + data[i - 2]);
        i++;
    }
    return 0;
}
