#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void using_x_var()
{
    //allocating memory for the first node.
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    //till here we create the first node of the list.

    //allocating memory for the second node.
    struct node *current = malloc(sizeof(struct node)); //creating new pointer for the second node.
    current->data = 98;
    current->link = NULL;
    //linking the nodes.
    head->link = current;

    //allocating memory for the third node of the list.
    struct node *current2 = malloc(sizeof(struct node));
    current2->data = 3;
    current2->link = NULL; 
    current->link = current2;
}

void without_using_x_var()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 9;
    current->link = NULL;
    head->link = current; //linking 1st node to 2nd node.

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current; //linking 2nd node to 3rd node.
}

void count_of_nodes(struct node *head)
{
    int count = 0, loc_data;
    if (head == NULL)
    {
        printf("Stack is empty: ");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count+=1;
        loc_data = ptr->data;
        printf("%d  ", loc_data);
        ptr = ptr->link;
    }
    printf("\n%d\n", count);
}

int main()
{
    //without_using_x_var();

     //allocating memory for the first node.
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    //till here we create the first node of the list.

    //allocating memory for the second node.
    struct node *current = malloc(sizeof(struct node)); //creating new pointer for the second node.
    current->data = 98;
    current->link = NULL;
    //linking the nodes.
    head->link = current;

    //allocating memory for the third node of the list.
    struct node *current2 = malloc(sizeof(struct node));
    current2->data = 3;
    current2->link = NULL; 
    current->link = current2;
    count_of_nodes(head);
}