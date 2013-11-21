#include <stdio.h>

int data[35];
void init (void);

int main()
{
    int n;
    init ();
    while (scanf ("%d", &n) != EOF)
    {
        printf("%d\n", data[n]);
    }
    return 0;
}

void init (void)
{
    int i;
    data[1] = 1;
    for (i = 2; i < 35; i++)
        data[i] = 2 * (data[i - 1] + 1);
}
