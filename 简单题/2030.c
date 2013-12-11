#include <stdio.h>
#include <string.h>
#define MAX 10000

char data[MAX];
int main()
{
    int n, i, length, count;
    scanf ("%d", &n);
    getchar();
    while (n--)
    {
        gets(data);
        length = strlen(data);
        for (i = count = 0; i < length; i++)
            if (data[i] < 0)
                count++;
        printf("%d\n", count / 3); //  linux下为UTF-8编码为每个汉子占用三字节 而GB2312为两个字节，AC 时要用 2
    }
    return 0;
}
