#include <stdio.h>
#include <string.h>
#include <memory.h>

char result[5010], standard[5010];
int isspaces(char x);

int main()
{
    int T, start, i, j, flag[2];
    char temp[5010];

    scanf("%d", &T);
    getchar();
    while (T--)
    {
        memset(standard, '\0', sizeof(standard));
        memset(result, '\0', sizeof(result));
        gets(temp); start = 0;
        while (gets(temp) && strcmp(temp, "END"))
        {
            strcpy(&standard[start], temp);
            standard[strlen(standard) + 1] = '\0';
            standard[strlen(standard)] = '\n';
            start = strlen(standard);
        }
        gets(temp); start = 0;
        while (gets(temp) && strcmp(temp, "END"))
        {
            strcpy(&result[start], temp);
            result[strlen(result) + 1] = '\0';
            result[strlen(result)] = '\n';
            start = strlen(result);
        }
        i = j = flag[0] = flag[1] = 0;
        while (i < strlen(standard) - 1 && j < strlen(result) - 1)
        {
            if (standard[i] == result[j])
            {
                i++; j++;
            }
            else
            {
                if (isspaces(standard[i]))
                {
                    flag[0] = 1;
                    i++;
                }
                else if (isspaces(result[j]))
                {
                    flag[0] = 1;
                    j++;
                }
                else
                {
                    flag[1] = 1;
                    printf("Wrong Answer\n");
                    break;
                }
            }
        }
        if (flag[1])
            continue;
        while (i < strlen(standard) - 1)
        {
            if (!isspaces(standard[i]))
            {
                flag[1] = 1;
                break;
            }
            else
                flag[0] = 1;
            i++;
        }
        while (j < strlen(result) - 1)
        {
            if (!isspaces(result[j]))
            {
                flag[1] = 1;
                break;
            }
            else
                flag[0] = 1;
            j++;
        }
        if (flag[1])
            printf("Wrong Answer\n");
        else
        {
            if (flag[0])
                printf("Presentation Error\n");
            else
                printf("Accepted\n");
        }
    }
    return 0;
}

int isspaces(char x)
{
    if (x == ' ' || x == '\t' || x == '\n')
        return 1;
    return 0;
}
