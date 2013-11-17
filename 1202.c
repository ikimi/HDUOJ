#include <stdio.h>

double score_to_s(double score);

int main()
{
    int N;
    double score, point, score_sum, point_sum;
    while (scanf("%d", &N) != EOF)
    {
        score_sum = 0;
        point_sum = 0;
        while (N--)
        {
            scanf("%lf%lf", &point, &score);
            if (score != -1)
            {
                score_sum += (score_to_s(score) * point);
                point_sum += point;
            }
        }
        if (point_sum == 0.0 || point_sum == 0.0)
            printf("-1\n");
        else
            printf("%.2lf\n", score_sum / point_sum);
    }
    return 0;
}

double score_to_s(double score)
{
    double s;
    score /= 10;
    switch((int)score)
    {
        case 9:
        case 10:s = 4.0;break;
        case 8:s = 3.0;break;
        case 7:s = 2.0;break;
        case 6:s = 1.0;break;
        default:s = 0.0;
    }
    return s;
}
