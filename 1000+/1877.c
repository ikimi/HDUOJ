#include <stdio.h>
#include <string.h>
#include <memory.h>

void revert(int m, int n, char result[]);
void reverse(char result[]);
void print(char result[]);

int main()
{
    int A, B, m;
    unsigned int sum;
    char result[100];

    while (scanf("%d", &m), m)
    {
        scanf("%d%d", &A, &B);
        sum = A + B;
        if (!sum)
            printf("0\n");
        else
        {
            memset(result, '\0', sizeof(result));
            revert(m, sum, result);
            reverse(result);
            print(result);
        }
    }
    return 0;
}

void revert(int m,int sum, char result[])
{
    int i;
    i = 0;
    while (sum)
    {
        result[i++] = sum % m + '0';
        sum /= m;
    }
}

void reverse(char result[])
{
    int length, mid, i;
    char temp;
    length = strlen(result);
    mid = length / 2;
    for (i = 0; i < mid; i++)
    {
        temp = result[i];
        result[i] = result[length - i - 1];
        result[length - i - 1] = temp;
    }
}

void print(char result[])
{
    int i, length;
    length = strlen(result);
    for (i = 0; i < length; i++)
        printf("%c", result[i]);
    printf("\n");
}
