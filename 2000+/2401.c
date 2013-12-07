#include <stdio.h>

int main()
{
    int N, d, w, result, sum, i;

    while (scanf("%d%d%d%d", &N, &d, &w, &result) != EOF)
    {
        for (i = 1, sum = 0; i < N; i++)
            sum += i;
        sum *= d;
        if (!(sum - result))
            printf("%d\n", N);
        else
            printf("%d\n", (sum - result) / w);
    }
    return 0;
}
