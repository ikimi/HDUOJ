#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        a %= 10;
        if (a == 0)
            printf("0\n");
        else if (a == 1)
            printf("1\n");
        else if (a == 2)
        {
            switch (b % 4)
            {
                case 0: printf("6\n");break;
                case 1: printf("2\n");break;
                case 2: printf("4\n");break;
                case 3: printf("8\n");break;
            }
        }
        else if (a == 3)
        {
            switch (b % 4)
            {
                case 0: printf("1\n");break;
                case 1: printf("3\n");break;
                case 2: printf("9\n");break;
                case 3: printf("7\n");break;
            }
        }
        else if (a == 4)
        {
            switch (b % 2)
            {
                case 0: printf("6\n");break;
                case 1: printf("4\n");break;
            }
        }
        else if (a == 5)
            printf("5\n");
        else if (a == 6)
            printf("6\n");
        else if (a == 7)
        {
            switch (b % 4)
            {
                case 0: printf("1\n");break;
                case 1: printf("7\n");break;
                case 2: printf("9\n");break;
                case 3: printf("3\n");break;
            }
        }
        else if (a == 8)
        {
            switch (b % 4)
            {
                case 0: printf("6\n");break;
                case 1: printf("8\n");break;
                case 2: printf("4\n");break;
                case 3: printf("2\n");break;
            }
        }
        else
        {
            switch (b % 2)
            {
                case 0: printf("1\n");break;
                case 1: printf("9\n");break;
            }
        }
    }
    return 0;
}
