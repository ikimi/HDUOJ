#include <stdio.h>
#include <math.h>

int wanshu(int i);

int main()
{
    int n, i, count, num1, num2, temp;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &num1, &num2);
        count = 0;
        if (num1 > num2)    // 判断num1和num2的大小  巨坑
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        for (i = num1; i <= num2; i++)
        {
            if (wanshu(i))
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

int wanshu(int num)
{
    int sum = 0, i;
    for (i = 1; i < num; i++)
        if (num % i == 0)
            sum += i;
    if (sum == num)
        return 1;
    return 0;
}
