#include <stdio.h>

int main()
{
    char name[100];
    double n, price, sum = 0;
    int temp;

    while (scanf("%s%lf%lf", name, &n, &price) != EOF)
    {
        sum += n * price;
    }
    sum *= 100;
    temp = (int)sum;
    if (temp % 10 > 4)
        sum = temp / 10 + 1;
    else
        sum = temp / 10;
    printf("%.1lf\n", sum / 10);
    return 0;
}
