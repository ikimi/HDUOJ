#include <stdio.h>

int main()
{
    int T, n, k;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        if (n % 10 == 0)
            printf("0\n");
        else if (n % 10 == 1)
            printf("1\n");
        else if (n % 10 == 2)
        {
            k = n % 4;
            switch(k)
            {
                case 0: printf("6\n");break;
                case 1: printf("2\n");break;
                case 2: printf("4\n");break;
                case 3: printf("8\n");break;
            }
        }
        else if (n % 10 == 3)
        {
            k = n % 4;
            switch(k)
            {
                case 0: printf("1\n");break;
                case 1: printf("3\n");break;
                case 2: printf("9\n");break;
                case 3: printf("7\n");break;
            }
        }
        else if (n % 10 == 4)
        {
            k = n % 2;
            switch(k)
            {
                case 0: printf("6\n");break;
                case 1: printf("4\n");break;
            }
        }
        else if (n % 10 == 5)
            printf("5\n");
        else if (n % 10 == 6)
            printf("6\n");
        else if (n % 10 == 7)
        {
            k = n % 4;
            switch(k)
            {
                case 0: printf("1\n");break;
                case 1: printf("7\n");break;
                case 2: printf("9\n");break;
                case 3: printf("3\n");break;
            }
        }
        else if (n % 10 == 8)
        {
            k = n % 4;
            switch(k)
            {
                case 0: printf("6\n");break;
                case 1: printf("8\n");break;
                case 2: printf("4\n");break;
                case 3: printf("2\n");break;
            }
        }
        else if (n % 10 == 9)
        {
            k = n % 2;
            switch(k)
            {
                case 0: printf("1\n");break;
                case 1: printf("9\n");break;
            }
        }
    }
    return 0;
}




