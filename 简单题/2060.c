#include <stdio.h>

int score(int balls);
int main()
{
    int N, balls, p_score, o_score;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d%d%d", &balls, &p_score, &o_score);
        if (p_score + score(balls) >= o_score)
            printf("Yes\n");
        else
            printf("No\n");
        printf("%d\n", score(balls));
    }
    return 0;
}

int score(int balls)
{
    int sum = 0;

    if (balls > 6)
    {
        sum += (balls - 6) * 8;
        balls = 6;
    }
    for (; balls; balls--)
        sum += 8-balls;
    return sum;
}
