#include <stdio.h>

struct node{
    int data;
    struct node *link;
};

int main()
{
    //allocating memory for the first node.
    stuct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    //till here we create the first node of the list.

    //allocating memory for the second node.
    stuct node *current = malloc(sizeof(struct node)); //creating new pointer for the second node.
    current->data = 98;
    current->link = NULL;
    //linking the nodes.
    head->link = current;

    //allocating memory for the third node of the list.
    current2 = malloc(sizeof(struct node));
    current2->data = 3;
    current2->link = NULL;
    //linking the node 
    current->link = current2;
}