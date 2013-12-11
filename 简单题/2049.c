#include <stdio.h>
#define MAX 30

long long int data1[MAX];
long long int data2[MAX][MAX];
void init (void);

int main()
{
    int c, N, M;
    init ();
    scanf ("%d", &c);
    while (c--)
    {
        scanf ("%d%d", &N, &M);
        printf("%I64d\n", data2[N][M] * data1[M]); // long long int 一定要用%I64d输出
    }
    return 0;
}

void init (void)
{
    int i, j;
    data1[1] = 0;
    data1[2] = 1;
    for (i = 3; i < MAX; i++)
    {
        data1[i] = (i - 1) * (data1[i - 1] + data1[i - 2]);
    }
    for (i = 1; i < MAX; i++)
    {
        data2[i][i] = 1;
        data2[i][1] = i;
    }
    for (i = 3; i < MAX; i++)
        for (j = 2; j < i; j++)
            data2[i][j] = data2[i - 1][j] + data2[i - 1][j - 1];
}
