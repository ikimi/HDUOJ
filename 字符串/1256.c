#include <stdio.h>
#include <string.h>

int main()
{
    int N, i = 1, j, k, high, col, row;
    char ch;

    scanf("%d", &N);
    while (i <= N)
    {
        getchar();
        scanf("%c %d", &ch, &high);
        col = 1 + high / 6;
        row = (high - 3) % 2 ? (high - 3) / 2  + 1: (high - 3) / 2;
        for (j = 0; j < col; j++)
            putchar(' ');
        for (j = 0; j < row; j++)
            putchar(ch);
        putchar('\n');
        for (k = 0; k < high - 3 - row; k++)
        {
            for (j = 0; j < col; j++)
                putchar(ch);
            for (j = 0; j < row; j++)
                putchar(' ');
            for (j = 0; j < col; j++)
                putchar(ch);
            putchar('\n');
        }
        for (j = 0; j < col; j++)
            putchar(' ');
        for (j = 0; j < row; j++)
            putchar(ch);
        putchar('\n');
        for (k = 0; k < row; k++)
        {
            for (j = 0; j < col; j++)
                putchar(ch);
            for (j = 0; j < row; j++)
                putchar(' ');
            for (j = 0; j < col; j++)
                putchar(ch);
            putchar('\n');
        }
        for (j = 0; j < col; j++)
            putchar(' ');
        for (j = 0; j < row; j++)
            putchar(ch);
        putchar('\n');
        if (i++ < N)
            printf("\n");
    }

    return 0;
}
