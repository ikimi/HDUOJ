#include <stdio.h>

int first[3], second[3];
int compare (int i, int j);

int main()
{
    int T, flag;
    scanf ("%d", &T);
    while (T--)
    {
        scanf("%d%d%d", &first[0], &first[1], &first[2]);
        scanf("%d%d%d", &second[0], &second[1], &second[2]);
        flag = compare(0, 0);
        if (flag > 0)
            printf("First\n");
        else if (flag == 0)
            printf("Same\n");
        else
            printf("Second\n");
    }
    return 0;
}

int compare (int i, int j)
{
    if (i == 2 && j == 2)
    {
        if (first[i] > second[j])
            return 1;
        else if (first[i] < second[j])
            return -1;
        else
            return 0;
    }
    if (first[i] > second[j])
        return 1;
    else if (first[i] < second[j])
        return -1;
    else
        return compare(i + 1, j + 1);
}
