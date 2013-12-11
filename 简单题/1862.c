#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    char number[7];
    char name[9];
    int score;
};
struct Student student[100001];
int compareByNumber(const void * p, const void * q);
int compareByName(const void * p, const void * q);
int compareByScore(const void * p, const void * q);

int main()
{
    int N, C, i, n;
    n = 1;
    while (scanf("%d%d", &N, &C), N)
    {
        for (i = 0; i < N; i++)
            scanf("%s%s%d", student[i].number, student[i].name, &student[i].score);
        if (C == 1)
            qsort(student, N, sizeof(student[0]), compareByNumber);
        else if (C == 2)
            qsort(student, N, sizeof(student[0]), compareByName);
        else
            qsort(student, N, sizeof(student[0]), compareByScore);
        printf("Case %d:\n", n++);
        for (i = 0; i < N; i++)
            printf("%s %s %d\n", student[i].number, student[i].name, student[i].score);
    }
    return 0;
}

int compareByNumber(const void * p, const void * q)
{
    const struct Student * a = p;
    const struct Student * b = q;
    return strcmp(a->number, b->number);
}

int compareByName(const void * p, const void * q)
{
    const struct Student * a = p;
    const struct Student * b = q;
    if (strcmp(a->name, b->name) > 0)
        return 1;
    else if (strcmp(a->name, b->name) == 0 && strcmp(a->number, b->number) > 0)
        return 1;
    else
        return -1;
}

int compareByScore(const void * p, const void * q)
{
    const struct Student * a = p;
    const struct Student * b = q;
    if (a->score > b->score)
        return 1;
    else if (a->score == b->score && strcmp(a->number, b->number) > 0)
        return 1;
    else
        return -1;
}
