#include <stdio.h>

int main()
{
    int M1, M2, R1, R2, R3;
    char c;
    while (scanf("%d%d\n", &M1, &M2) != EOF)
    {
        R1 = R2 = R3 = 0;
        while ((c = getchar()) != '\n')
        {
            switch (c)
            {
                case 'A': R1 = M1;break;
                case 'B': R2 = M2;break;
                case 'C': M1 = R3;break;
                case 'D': M2 = R3;break;
                case 'E': R3 = R1 + R2;break;
                case 'F': R3 = R1 - R2;break;
            }
        }
        printf("%d,%d\n", M1, M2);
    }
    return 0;
}
