#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Player
{
    char name[20];
    int time;
} players[10];

int compare(const void *p, const void *q);
int getnum();
void ungetnum(int x);

int main()
{
    int n, i, j, num, minute, second;

    num = 1;
    while (n = getnum())
    {
        for (i = 0; i < n; i++)
        {
            scanf("%s%d:%d", players[i].name, &minute, &second);
            players[i].time = minute * 60 + second;
        }
        qsort(players, n, sizeof(players[0]), compare);

        printf("Case #%d\n", num++);
        printf("%s %d\n", players[0].name, 1);
        for (j = 1, i = 1; i < n; i++)
            if (players[i].time == players[i - 1].time)
                printf("%s %d\n", players[i].name, j);
            else
            {
                printf("%s %d\n", players[i].name, i + 1);
                j = i + 1;
            }
        if (n = getnum())
            printf("\n");
        ungetnum(n);
    }
    return 0;
}

int compare(const void *p, const void *q)
{
    const struct Player *a = p;
    const struct Player *b = q;
    if (a->time > b->time)
        return 1;
    else if (a->time < b->time)
        return -1;
    else
        return strcmp(a->name, b->name);
}

int sp, flag = 0;

int getnum()
{
    if (flag)
    {
        flag = 0;
        return sp;
    }
    else if (scanf("%d", &sp), sp)
        return sp;
    else
        return 0;
}

void ungetnum(int x)
{
    flag = 1;
    sp = x;
}
