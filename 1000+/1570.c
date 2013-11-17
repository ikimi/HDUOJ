#include <stdio.h>

int data[11];
int jiecheng(int m);

int main()
{
    int k, m, n;
    char c;
    jiecheng(10);
    data[0] = 1;
    scanf("%d", &k);
    while (k--)
    {
        getchar();
        c = getchar();
        getchar();
       scanf("%d %d", &n, &m);
        if (c == 'A')
            printf("%d\n",data[n] / data[n - m]);
        else
            printf("%d\n", data[n] / (data[n - m] * data[m]));
    }
    return 0;
}

int jiecheng(int m)
{
    if (m == 0)
        return data[0] = 1;
    if (data[m] != 0)
        return data[m];
    return data[m] = m * jiecheng(m - 1);
}
