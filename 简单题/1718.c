#include <stdio.h>

int student[1002];

int main()
{
    int jack, other, n, score, rank;
    while (scanf("%d", &jack) != EOF)
    {
        n = 0;
        while (scanf("%d %d", &other, &student[n++]), other || student[n-1])
            if (other == jack)
                score = student[n-1];
        rank = 1;
        while (--n >= 0)
        {
            if (student[n] > score)
                rank++;
        }
        printf("%d\n", rank);
    }
    return 0;
}
