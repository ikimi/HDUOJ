#include <stdio.h>
#include <stdlib.h>

int A[110], B[110];
int compare (const void *p, const void *q);
int binary_search (int *a, int start, int end, int x);

int main()
{
    int n, m, i, flag;
    while (scanf ("%d%d", &n, &m), n || m)
    {
        for (i = 0; i < n; i++)
            scanf ("%d", &A[i]);
        for (i = 0; i < m; i++)
            scanf ("%d", &B[i]);
        qsort(A, n, sizeof(A[0]), compare); qsort(B, m, sizeof(B[0]), compare);
        flag = i = 0;
        while (i < n)
            if (binary_search(B, 0, m - 1, A[i]) == -1)
            {
                flag = 1;
                printf("%d ", A[i++]);
            }
            else
                i++;
        if (!flag)
            printf("NULL\n");
        else
            printf("\n");
    }
    return 0;
}

int compare (const void *p, const void *q)
{
   const int *a = p;
   const int *b = q;
   if (*a > *b)
    return 1;
   return -1;
}

int binary_search (int *a, int start, int end, int x)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (*(a + mid) == x)
            return mid;
        else if (*(a + mid) > x)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return -1;
}
