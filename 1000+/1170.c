/*
    水题 重点判断叔叔是否等于整数
         以及处理读入换行符
*/

#include <stdio.h>

int main()
{
    int T;
    double a, b;
    char op;
    scanf("%d", &T);
    while (T--)
    {
        scanf("\n");
        scanf("%c %lf %lf", &op, &a, &b);

        if (op == '+')
            printf("%.0lf\n", a + b);
        else if (op == '-')
            printf("%.0lf\n", a - b);
        else if (op == '*')
            printf("%.0lf\n", a * b);
        else
            if ( a / b == (int)(a / b))
                printf("%.0lf\n", a / b);
            else
                printf("%.2lf\n", a / b);
    }
    return 0;
}
