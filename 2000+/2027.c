#include <stdio.h>
#include <memory.h>
#include <string.h>
#define MAX 110

char data[MAX];
int count[5];

int main()
{
    int n, i, length;
    scanf("%d", &n);
    getchar();
    while (--n)
    {
        memset(count, 0, sizeof(count));
        fgets(data, MAX, stdin);
        length = strlen(data);
        for (i = 0; i < length; i++)
        {
            switch (data[i])
            {
                case 'a' :count[0]++;break;
                case 'e' :count[1]++;break;
                case 'i' :count[2]++;break;
                case 'o' :count[3]++;break;
                case 'u' :count[4]++;break;
            }
        }
        printf ("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n", count[0], count[1], count[2], count[3], count[4]);
    }
    memset(count, 0, sizeof (count));
    fgets (data, MAX, stdin);
    length = strlen(data);
    for (i = 0; i < length; i++)
    {
        switch (data[i])
        {
            case 'a' :count[0]++;break;
            case 'e' :count[1]++;break;
            case 'i' :count[2]++;break;
            case 'o' :count[3]++;break;
            case 'u' :count[4]++;break;
        }
    }
    printf ("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", count[0], count[1], count[2], count[3], count[4]);
    return 0;
}
