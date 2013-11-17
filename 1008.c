#include <stdio.h>

int main()
{
    int N, now, next, i, sum;
    while (scanf("%d", &N) != EOF )
    {
        if (0 == N)
            break;
        now = 0;
        sum = 0;
        for (i = 0;i < N;i++)
        {
            scanf("%d", &next);
            if (next > now)
            {
                sum += (next - now) * 6;
                sum += 5;
                now = next;
            }
            else if (next < now)
            {
                sum += (now - next) * 4;
                sum += 5;
                now = next;
            }
            else
                sum += 5;
        }
        printf("%d\n", sum);
    }
    return 0;
}
