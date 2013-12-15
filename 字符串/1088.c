#include <stdio.h>
#include <string.h>

int main()
{
    char word[90];
    int i, characters = 0;

    while (scanf("%s", word) != EOF)
    {
        if (!strcmp("<br>", word))
        {
            characters = 0;
            printf("\n");
        }
        else if (!strcmp("<hr>", word))
        {
            if (characters)
                printf("\n");
            for (i = 0; i < 80; i++)
                printf("-");
            printf("\n");
            characters = 0;
        }
        else
        {
            if (strlen(word) + characters + 1 <= 80)
            {
                if (!characters)
                    printf("%s", word);
                else
                    printf(" %s", word);
                characters += strlen(word) + 1;
            }
            else
            {
                printf("\n%s", word);
                characters = strlen(word);
            }
        }
    }
    printf("\n");
    return 0;
}
