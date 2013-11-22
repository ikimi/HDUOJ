#include <stdio.h>
#include <memory.h>

#define MAX_N 55
#define MAX_M 10

int data[MAX_N][MAX_N];
int student[MAX_N];
int course[MAX_N];

int main()
{
    int n, m, i, j, sum;
    while (scanf ("%d%d", &n, &m) != EOF)
    {
        memset(course, 0, sizeof(course));
        for (i = 1; i <= n; i++)
        {
            student[i] = 0;
            for (j = 1; j <= m; j++)
            {
                scanf ("%d", &data[i][j]);
                student[i] += data[i][j];
                course[j] += data[i][j];
            }
        }
        sum = 0;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                if (course[j] > data[i][j] * n)
                    break;
            }
            if (j > m)
                sum++;
        }
        for (i = 1; i < n; i++)
            printf("%.2lf ", student[i] / (m * 1.0));
        printf("%.2lf\n", student[i] / (m * 1.0));
        for (j = 1; j < m; j++)
            printf("%.2lf ", course[j] / (n * 1.0));
        printf("%.2lf\n", course[j] / (n * 1.0));
        printf("%d\n\n", sum);
    }
    return 0;
}
