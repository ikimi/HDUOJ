#include <stdio.h>
#include <memory.h>

long long int zero[26], one[26], two[26];
void count(char c, long long int str[]);
void print(long long int str[]);
void solve(long long int A[], long long int B[], long long int C[]);

int main()
{
    int N, k, i;
    char c;
    scanf("%d", &N);
    while (N--)
    {
        memset(zero, 0, sizeof(zero));
        memset(one, 0, sizeof (one));
        memset(two, 0, sizeof(two));
        getchar();
        while ((c = getchar()) != ' ')
            count(c, zero);
        while ((c = getchar()) != ' ')
            count(c, one);
        scanf("%d", &k);
        if (k == 0)
        {
            print(zero);
        }
       else if (k == 1)
        {
            print(one);
        }
        else
        {
            for (i = 2; i <= k; i++)
                if (i % 3 == 0)
                    solve(one, two, zero);
                else if (i % 3 == 1)
                    solve(zero, two, one);
                else
                    solve(zero, one, two);
            if (k % 3 == 0)
                print(zero);
            else if (k % 3 == 1)
                print(one);
            else
                print(two);
        }
        printf("\n");
    }
    return 0;
}

void count(char c, long long int str[])
{
    str[c- 'a']++;
}

void print(long long int str[])
{
    int i;
    for (i = 0; i < 26; i++)
        printf("%c:%lld\n", i + 'a', str[i]);
}

void solve(long long int A[], long long int B[], long long int C[])
{
    int i;
    for (i = 0; i < 26; i++)
        C[i] = A[i] + B[i];
}
