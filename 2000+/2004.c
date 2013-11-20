#include <stdio.h>

int main()
{
    int score;
    while (scanf("%d", &score) != EOF)
    {
        if (score < 0 || score > 100)
            printf("Score is error!\n" );
        else if (score >= 90 && score <= 100)
            printf("A\n");
        else if (score >= 80 && score <= 89)
            printf("B\n");
        else if (score >= 70 && score <= 79)
            printf("C\n");
        else if (score >= 60 && score <= 69)
            printf("D\n");
        else
            printf("E\n");
    }
    return 0;
}
