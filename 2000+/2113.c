#include <stdio.h>

int getnum();
void ungetnum(int x);
int sol(int x);

int main()
{
    int c;

    while ((c = getnum()) != EOF)
    {
        printf("%d\n", sol(c));
        if ((c = getnum()) != EOF)
        {
            printf("\n");
        }
        ungetnum(c);
    }
    return 0;
}

int sp, flag = 0;

int getnum()
{
    if (flag)
    {
        flag = 0;
        return sp;
    }
    else if (scanf("%d", &sp) != EOF)
        return sp;
    else
        return EOF;
}

void ungetnum(int x)
{
    flag = 1;
    sp = x;
}

int sol(int x)
{
    int sum = 0;
    while (x)
    {
        if (!((x % 10) % 2))
            sum += x % 10;
        x /= 10;
    }
    return sum;
}
