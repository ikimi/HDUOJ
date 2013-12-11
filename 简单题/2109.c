#include <stdio.h>
#include <stdlib.h>

int data1[100], data2[100];
int compare(const void *p, const void *q);

int main()
{
    int n, i, score1, score2;

    while (scanf("%d", &n), n)
    {
        i = 0;
        while (i < n)
            scanf("%d", &data1[i++]);
        i = 0;
        while (i < n)
            scanf("%d", &data2[i++]);
        qsort(data1, n, sizeof(data1[0]), compare);
        qsort(data2, n, sizeof(data2[0]), compare);
        score1 = score2 = 0;
        i = -1;
        while (++i < n)
            if (data1[i] > data2[i])
                score1 += 2;
            else if (data1[i] < data2[i])
                score2 += 2;
            else
            {
                score1 += 1; score2 += 1;
            }
        printf("%d vs %d\n", score1, score2);
    }
    return 0;
}

int compare(const void *p, const void *q)
{
    const int *a = p;
    const int *b = q;
    return *a - *b;
}
