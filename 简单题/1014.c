#include <stdio.h>

int main()
{
    int step, mod, i, seed, temp;
    while (scanf("%d %d", &step, &mod) != EOF)
    {
        seed = 0, temp = 0;
        for (i = 1; i < mod; i++)
        {
            temp = (temp + step) % mod;
            if (temp == seed)
            {
                printf("%10d%10d    Bad Choice\n\n", step, mod);
                break;
            }
        }
        if (i == mod)
            printf("%10d%10d    Good Choice\n\n",step, mod);
    }
    return 0;
}
