#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define ischr(x) x >= 'a' && x <= 'z' ? 1 : 0

struct node
{
    char *english;
    struct node *child[26];
} *root;
void init(void);
void insert(char *english, char *mars);
void search(char *str);

int main()
{
    char temp[3010], temp1[3010], mars[20], english[20];
    int i, j;

    init();
    scanf("%s", temp);
    while (scanf("%s%s", english, mars) && strcmp("END", english))
    {
        insert(english, mars);
    }
    getchar();
    while (gets(temp), strcmp("END", temp))
    {
        i = 0;
        while (temp[i])
        {
            if (ischr(temp[i]))
            {
                j = 0;
                while (temp[i] && ischr(temp[i]))
                    temp1[j++] = temp[i++];
                temp1[j] = '\0';
                search(temp1);
            }
            else
                putchar(temp[i++]);
        }
        printf("\n");
    }
    return 0;
}

void init()
{
    int i;

    root = (struct node *) malloc(sizeof(struct node));
    root->english = NULL;
    for (i = 0; i < 26; i++)
        root->child[i] = NULL;
}

void insert(char *english, char *mars)
{
    int i, j, id;
    struct node *s, *t;

    s = root; i = 0;
    while (mars[i])
    {
        id = mars[i] - 'a';
        if (!s->child[id])
        {
            t = (struct node *) malloc(sizeof(struct node));
            t->english = NULL;
            for (j = 0; j < 26; j++)
                t->child[j] = NULL;
            s->child[id] = t;
        }
        s = s->child[id];
        i++;
    }
    s->english = (char *) malloc(20 * sizeof(char));
    strcpy(s->english, english);
}

void search(char *str)
{
    int i = 0, id;
    struct node *s = root;

    while (str[i])
    {
        id = str[i++] - 'a';
        if (!s->child[id])
        {
            printf("%s", str);
            return ;
        }
        s = s->child[id];
    }
    if (!s->english)
        printf("%s", str);
    else
        printf("%s", s->english);
}
