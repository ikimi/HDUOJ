#include <stdio.h>

int data[510];
int main()
{
    int T, N, i, j, dis, min;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        min = 100000000;
        for (i = 0; i < N; i++)
            scanf("%d", &data[i]);
        for (i = 0; i < N; i++)
        {
            dis = 0;
            for (j = 0; j < N; j++)
            {
                dis += (data[i] - data[j]) < 0 ? (data[j] - data[i]) : (data[i] - data[j]);
                if (dis >= min)
                    break;
            }
            if (dis < min)
                min = dis;
        }
        printf("%d\n", min);
    }
    return 0;
}
