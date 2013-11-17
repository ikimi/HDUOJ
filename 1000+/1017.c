#include <stdio.h>

int main()
{
    int N, i, n, m, a, b, case_no, count;
    scanf("%d", &N);
    for (i = 0; i < N;i++)
    {
        case_no = 1;
        while (scanf("%d %d", &n, &m), m || n)
        {
            count = 0;
            for (a = 1; a < n - 1; a++)
                for (b = a + 1; b < n; b++)
                    if ((a * a + b * b + m) % (a * b) == 0)
                        count++;
            printf("Case %d: %d\n",case_no++, count);
        }
    if (i != N -1)
        printf("\n");
    }
    return 0;
}
