#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int string_compare(const void *p, const void *q);
int compare(const void *p, const void *q);

int main()
{
    char temp[10], dic[110][10], ll[110][10];
    int i, j, flag;

    i = 0;
    while (scanf("%s", temp) && temp[0] != 'X')
    {
        strcpy(dic[i++], temp);
    }
    qsort(dic, i, sizeof(dic[0]), string_compare);
    for (j = 0; j < i; j++)
    {
        strcpy(ll[j], dic[j]);
        qsort(ll[j], strlen(ll[j]), sizeof(ll[j][0]), compare);
    }
    while (scanf("%s", temp) && temp[0] != 'X')
    {
        qsort(temp, strlen(temp), sizeof(temp[0]), compare);
        for (j = flag = 0; j < i; j++)
        {
            if (!strcmp(ll[j], temp))
            {
                flag = 1;
                printf("%s\n", dic[j]);
            }
        }
        if (!flag)
            printf("NOT A VALID WORD\n");
        printf("******\n");
    }
    return 0;
}

int string_compare(const void *p, const void *q)
{
    const char *a = p;
    const char *b = q;

    return strcmp(a, b);
}

int compare(const void *p, const void *q)
{
    const char *a = p;
    const char *b = q;

    return *a - *b;
}
