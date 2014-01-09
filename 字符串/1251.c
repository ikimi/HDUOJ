/*
    简单 Trie 树
*/
#include <stdio.h>
#include <string.h>
#define MAX 26
#define LENGTH 15

struct Node
{
    int count;
    struct Node* next[MAX];
} *root;

int getlines(char *word);
void insert_trie(char *word);
int search_trie(char *prefix);

int main()
{
    char word[LENGTH], prefix[LENGTH];
    int i;

    root = (struct Node *)malloc(sizeof(struct Node));
    root->count = 0;
    for(i = 0; i < MAX; i++)
        root->next[i] = NULL;

    while (getlines(word) > 0)
    {
        insert_trie(word);
    }

    while (getlines(prefix) > 0)
    {
        printf("%d\n", search_trie(prefix));
    }
    return 0;
}

int getlines(char *word)
{
    char c;
    int i = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != '\n')
            word[i++] = c;
        else
        {
            word[i] = '\0';
            break;
        }
    }
    if (c == EOF)
        return -1;
    else
        return i;
}

void insert_trie(char *word)
{
    struct Node *temp = root;
    int i = 0, j;

    while (word[i])
    {
       if (temp->next[word[i]- 'a'])
       {
            temp = temp->next[word[i]- 'a'];
            temp->count++;
       }
       else
       {
            temp->next[word[i] - 'a'] = (struct Node *)malloc(sizeof(struct Node));
            temp = temp->next[word[i] - 'a'];
            temp->count = 1;
            for (j = 0; j < MAX; j++)
                temp->next[j] = NULL;
       }
       i++;
    }
}

int search_trie(char *prefix)
{
    struct Node * temp = root;
    int i = 0;

    while (prefix[i])
    {
        if (temp->next[prefix[i] - 'a'])
            temp = temp->next[prefix[i] - 'a'];
        else
            return 0;
        i++;
    }
    return temp->count;
}





