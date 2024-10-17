#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}node;

node *add_node(node *head, int value)
{
    node *ptr, *temp;
    ptr = head;
    temp = (node *)malloc(sizeof(node));

    temp->data = value;
    temp->link = NULL;

    temp->link = top;
    top = newNode;
    '''
    while (ptr->link!=NULL)
    {
        ptr = ptr->link;
    }
    ptr->link=temp;
    return head;
    '''
}

int main()
{
    node *head = malloc(sizeof(node));
    int n, value;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);
    node *pointer;
    for (int i = 0; i<n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);
        pointer = add_node(head, value);
    }

    //node *pointer = add_node();
    int out;
    while (pointer->link != NULL)
    {
        out = pointer->data;
        printf("%d\t", out);
    }
}