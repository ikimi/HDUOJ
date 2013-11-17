#include <stdio.h>
#include <memory.h>
#include <string.h>

struct person
{
    char number[30];
    int sum;
};

int insert(struct person list[], int length, char number[], int sum);

int main()
{
    int N, M, G, course[20], i, j, n, sum, score;
    char student[30];
    struct person list[1000];

    while (scanf("%d", &N), N)
    {
        scanf("%d", &M);
        scanf("%d", &G);

        memset(course, 0, sizeof(course));
        i = 0;
        while (i < M)
        {
            scanf("%d", &course[i++]);
        }
        i = sum = j = 0;
        while (i++ < N)
        {
            scanf("%s%d", student, &n);
            while (n--)
            {
                scanf("%d", &score);
                sum += course[score - 1];
            }
            if (sum >= G)
            {
                insert(list, j, student, sum);
                j++;
            }
            sum = 0;
        }
        printf("%d\n", j);
        for (i = 0; i < j; i++)
            printf("%s %d\n", list[i].number, list[i].sum);
    }
    return 0;
}

int insert(struct person list[], int length, char student[], int sum)
{
    int i, temp;
    char number[30];
    for (i = length - 1; i >= 0; i--)
    {
        if (sum >= list[i].sum)
        {
            if (sum > list[i].sum)
            {
                temp = list[i].sum;
                list[i].sum = list[i + 1].sum;
                list[i + 1].sum = temp;
                strcpy(number, list[i].number);
                strcpy(list[i].number, list[i + 1].number);
                strcpy(list[i + 1].number, number);
            }
            else
                if (strcmp(student, list[i].number) < 0)
                {
                    temp = list[i].sum;
                    list[i].sum = list[i + 1].sum;
                    list[i + 1].sum = temp;
                    strcpy(number, list[i].number);
                    strcpy(list[i].number, list[i + 1].number);
                    strcpy(list[i + 1].number, number);
                }
                else
                    break;
        }
        else
            break;
    }
    list[i + 1].sum = sum;
    strcpy(list[i + 1].number, student);
    return 0;
}
