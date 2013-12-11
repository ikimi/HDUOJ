/*
    题目倒是不难 关键是复杂度
    第一遍shell排序 果断超时
    后来用最大有限队列 AC
    自己实现的最大队列 还算满意吧
*/

#include <stdio.h>

int data[20002], size;
int build_max_heap(int n);
int extract_max();

int main()
{
    int t, n, i, sum;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &data[i]);
        size = n;
        build_max_heap(n);
        i = sum = 0;
        while ((i += 2) < n)
        {
            extract_max();
            extract_max();
            sum += extract_max();
            i++;
        }
        printf("%d\n", sum);
    }
    return 0;
}

int reset(int i, int size)
{
    int left, right, max, temp;
    left = 2 * i + 1;
    right = 2 * i + 2;
    max = i;
    if (left < size && data[max] < data[left])
        max = left;
    if (right < size && data[max] < data[right])
        max = right;
    if (i != max)
    {
        temp = data[i];
        data[i] =  data[max];
        data[max] = temp;
        reset(max, size);
    }
    return 0;
}

int build_max_heap(int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
        reset(i, n);
    return 0;
}

int extract_max()
{
    int max;
    max = data[0];
    data[0] = data[--size];
    reset(0, size);
    return max;
}
