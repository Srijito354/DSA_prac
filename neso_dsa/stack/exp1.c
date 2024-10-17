#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} *top = NULL;

void push(int data)
{
    struct node *head = malloc(sizeof(struct node));
    head->data = data;
    head->link = top;

    top = head;
}

int main()
{
    int n, data;
    scanf("%d", &n);
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &data);
        push(data);
    }
    struct node *new;
    new = top;
    while (new!=NULL)
    {
        printf("%d ", new->data);
        new = new->link;
    }
    return 0;
}