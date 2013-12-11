#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    char Name[20];
    int AC;
    int Cost;
};

int compare (const void *p, const void *q);

int main()
{
    struct Person person[10000];
    char Score[20];
    int courses, i, j, ac, score, damage, cost, Cost, n = 0;

    scanf("%d%d", &courses, &cost);
    while (scanf("%s", person[n].Name) != EOF)
    {
        Cost = ac = 0;
        for (i = 0; i < courses; i++)
        {
            score = damage = j = 0;
            scanf("%s", Score);
            while (Score[j] == ' ' || Score[j] == '\b')
                j++;
            if (Score[j] == '-' || Score[j] == '0')
                continue;
            ac ++;
            if (strchr(Score, '(') == NULL)
                sscanf(Score, "%d", &score);
            else
                sscanf(Score, "%d(%d)", &score, &damage);
            Cost += score + damage * cost;
        }
        person[n].AC = ac;
        person[n].Cost = Cost;
        n++;
    }
    qsort(person, n, sizeof(person[0]), compare);
    for (i = 0; i < n; i++)
        printf("%-10s %2d %4d\n", person[i].Name, person[i].AC, person[i].Cost);
    return 0;
}

int compare(const void *p, const void *q)
{
    const struct Person *a = p;
    const struct Person *b = q;
    if (a->AC > b->AC)
        return -1;
    else if (a->AC < b->AC)
        return 1;
    else
    {
        if (a->Cost < b->Cost)
            return -1;
        else if (a->Cost > b->Cost)
            return 1;
        else
        {
            if (strcmp(a->Name, b->Name) < 0)
                return -1;
            else return 1;
        }
    }
}
