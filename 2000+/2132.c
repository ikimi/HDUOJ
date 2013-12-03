#include <stdio.h>

_int64 data[100001];
void init(void);

int main()
{
    _int64 n;

    init();
    while (scanf("%I64d", &n), n >= 0)
    {
        printf("%I64d\n", data[n]);
    }
    return 0;
}

void init(void)
{
    _int64 i;

    data[0] = 0;
    data[1] = 1;
    data[2] = 3;
    for (i = 3; i < 100001; i++)
        if (!(i % 3))
            data[i] = data[i - 1] + i * i * i;
        else
            data[i] = data[i - 1] + i;
}
