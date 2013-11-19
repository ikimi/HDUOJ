#include <stdio.h>

int main()
{
    int N, A, B, T, sub1, sub2;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d%d%d", &A, &B, &T);
        sub1 = T % A;
        sub2 = T % B;
        if (sub1 == sub2)
            printf("Both!\n");
        else if (sub1 > sub2)
            printf("Xiangsanzi!\n");
        else
            printf("Sempr!\n");
    }
    return 0;
}
