#include <stdio.h>
#include <string.h>

int main()
{
    char letter, word[210];
    int i, length;
    double count;

    while (scanf("%c%s", &letter, word) != EOF)
    {
        getchar();
        length = strlen(word);
        i = count = 0;

        for (; i < length; i++)
            if (tolower(letter) == tolower(word[i]))
                count++;
        printf("%.5lf\n", count / length);
    }
    return 0;
}
