#include <stdio.h>
#include <stdlib.h>

int compare(const void * p, const void *q);

int main()
{
    char data[3];
    while (scanf("%s", data) != EOF)
    {
        qsort(data, 3, sizeof(data[0]), compare);
        printf("%c %c %c\n", data[0], data[1], data[2]);
    }
    return 0;
}

int compare(const void * p, const void * q)
{
    const char * a = p;
    const char * b = q;
    if (*a > *b)
        return 1;
    else if (*a < *b)
        return -1;
    else
        return 0;
}
