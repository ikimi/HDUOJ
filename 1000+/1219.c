#include <stdio.h>
#include <memory.h>

int letters[26];
int show();

int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            show();
            memset(letters, 0, sizeof(letters));
        }
        else
        {
            if (c <= 'z' && c >= 'a')
                letters[c - 97]++;
        }
    }
    return 0;
}

int show()
{
    int i;
    for (i = 0; i < 26; i++)
        printf("%c:%d\n", i + 97, letters[i]);
    printf("\n");
    return 0;
}
