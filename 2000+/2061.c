#include <stdio.h>

int main()
{
    int N, K, flag;
    double score_sum, credit_sum, score, credit;
    char course[50];

    scanf("%d", &N);
    while (--N)
    {
        scanf("%d", &K);
        flag = score_sum = credit_sum = 0;
        while (K--)
        {
            scanf ("%s%lf%lf", course, &credit, &score);
            if (score < 60)
                flag = 1;
            score_sum += score * credit;
            credit_sum += credit;
        }
        if (flag)
            printf("Sorry!\n\n");
        else
            printf("%.2lf\n\n", score_sum / credit_sum);
    }

    scanf("%d", &K);
    flag = score_sum = credit_sum = 0;
    while (K--)
    {
        scanf ("%s%lf%lf", course, &credit, &score);
            if (score < 60)
                flag = 1;
        score_sum += score * credit;
        credit_sum += credit;
    }
    if (flag)
        printf("Sorry!\n");
    else
        printf("%.2lf\n", score_sum / credit_sum);

    return 0;
}
