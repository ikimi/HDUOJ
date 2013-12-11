#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, flag, avg, i;

    while (scanf("%d%d", &n, &m), n || m)
    {
        if (!m)
            printf("Yes\n");
        else  if (!n)
        {
            if (m > 0)
                printf("No\n");
            else
            {
                m = -m;
                if (m < 4)
                    printf("No\n");
                else
                {
                    avg = sqrt(m);
                    if (avg * avg == m)
                        printf("Yes\n");
                    else
                        printf("No\n");
                }
            }
        }
        else
        {
            if (n < 0)
                n = -n;
            flag = 0;
            if (m > 0)
            {
                avg = (int)sqrt(m);
                for (i = avg; i <= m; i++)
                    if (!(m % i))
                        if (i + m / i == n)
                        {
                            flag = 1;
                            break;
                        }
                if (flag)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
            else
            {
                avg = sqrt(-m);
                for (i = avg; i <= -m; i++)
                    if (!(m % i))
                        if (i + m / i == n)
                        {
                            flag = 1;
                            break;
                        }
                if (flag)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        }
    }
    return 0;
}
