#include <stdio.h>
#include <string.h>

int main()
{
    char words[1000];
    int i, length;
    while (gets(words))
    {
        if (!strcmp(words, "ENDOFINPUT"))
            break;
        gets(words);
        length = strlen(words);
        for (i = 0; i < length; i++)
        {
            if (words[i] >= 'A' && words[i] <= 'Z')
            {
                switch (words[i])
                {
                    case 'A' :words[i] = 'V';break;
                    case 'B' :words[i] = 'W';break;
                    case 'C' :words[i] = 'X';break;
                    case 'D' :words[i] = 'Y';break;
                    case 'E' :words[i] = 'Z';break;
                    default  :words[i] = words[i] - 5;
                }
            }
        }
        puts(words);
        gets(words);
    }
    return 0;
}
