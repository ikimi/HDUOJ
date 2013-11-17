#include <stdio.h>

int main()
{
    int n, i, sum, data[50], average, result, no;
    no = 1;
    while (scanf("%d", &n), n)
    {
        i = sum = 0;
        while (i < n)
        {
            scanf("%d", &data[i++]);
            sum += data[i - 1];
        }
        average = sum / n;
        i = result = 0;
        while (i < n)
        {
            if (data[i++] < average)
                result += average - data[i - 1];
        }
        printf("Set #%d\n", no++);
        printf("The minimum number of moves is %d.\n\n", result);
    }
    return 0;
}
