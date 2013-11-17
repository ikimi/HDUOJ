/*
    虽然是道大水题 但是要考虑的情况却是很多的，下面几个用例来检测程序结果的正确性
    55555556
    15555556
    125
    555523457889
    1234
    123455234
*/
#include <stdio.h>
#include <string.h>

#define MAX 1002

char input[MAX];
int output[MAX];

int sort(int data, int end);

int main()
{
    int i, j, sum, length, tag;
    while (scanf("%s", input) != EOF)
    {
        length = strlen(input);
        j = sum = tag = 0;
        for (i = 0; i < length;)
            if (input[i] == '5')
            {
                if (tag)
                {
                    sort(sum, j);
                    while (i < length)
                    {
                        if (input[i] != '5')
                            break;
                        else
                            i++;
                    }
                    if (i < length)
                        j++;
                    sum = tag = 0;
                }
                else
                    i++;
            }
            else
            {
                sum = sum * 10 + (input[i] - '0');
                tag = 1;
                i++;
            }
        if (tag)
            sort(sum, j);
        for (i = 0; i < j; i++)
            printf("%d ", output[i]);
        printf("%d\n", output[j]);
    }
    return 0;
}

int sort(int data, int end)
{
    int k;
    for (k = end - 1; k >= 0; k--)
    {
        if (output[k] > data)
            output[k + 1] = output[k];
        else
            break;
    }
    output[k + 1] = data;
    return 0;
}
