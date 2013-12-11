#include <stdio.h>

int main()
{
    double  n, m; // 如果不做处理输入输出将会溢出
    while (scanf ("%lf %lf", &n, &m), n || m)
    {
        printf("%.0lf\n", n + m - 2);
    }
    return 0;
}
