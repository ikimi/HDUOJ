#include <stdio.h>
#include <string.h>

char A[20], B[20], C[20];
long long int a, b;
long long int atoi(char *s);
void itoa(long long int c);
void print(void);

int main()
{
    while (scanf("%s %s", A, B) != EOF)
    {
        a = atoi(A);
        b = atoi(B);
        itoa(a + b);
        print();
    }
    return 0;
}

long long int atoi(char *s)
{
    long long int a;
    int sign;

    sign = *s == '-' ? -1 : 1;
    if (*s == '-' || *s == '+')
        s++;
    a = 0;
    while (*s != '\0')
        if (*s >= 'A' && *s <= 'F')
            a = 16 * a + *s++ - 'A' + 10;
        else
            a = 16 * a + *s++ - '0';
    return sign * a;
}

void itoa(long long int c)
{
    int i = 0;
    if (c == 0)
        C[i++] = 0 + '0';
    if (c < 0)
    {
        C[i++] = '-';
        c = -c;
    }
    while (c)
    {
        if (c % 16 >=10)
            C[i++] = c % 16 - 10 + 'A';
        else
            C[i++] = c % 16 + '0';
        c /= 16;
    }
    C[i] = '\0';
}

void print()
{
    int length, end;
    if (C[0] == '-')
    {
        printf("-");
        end = 1;
    }
    else
        end = 0;
    length = strlen(C) - 1;
    while (length >= end)
    {
        printf("%c", C[length--]);
    }
    printf("\n");
}
