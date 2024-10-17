#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link1;
    struct node *link2;
} node;

int main()
{
    node *new = malloc(sizeof(struct node));
    new->data = 5;
    new->link1 = NULL;
    new->link2 = NULL;

    node *new2 = malloc(sizeof(struct node));
    new->link2 = new2;
    new2->data = 4;
    new2->link1 = new->link2;
    new2->link2 = NULL;

    node *new3 = malloc(sizeof(struct node));
    new2->link2 = new3;
    new3->data = 7;
    new3->link1 = new2->link2;
    new3->link2 = NULL;
    return 0;
}