#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} *top = NULL;

void push(int data)
{
    struct node* new = malloc(sizeof(struct node));
    if(new == NULL) //malloc returns NULL when there's no memory left to be allocated.
    {
        printf("Stack overflow");
        exit(1);
    }
    new->data = data;
    new->link = NULL;

    new->link = top;
    top = new; //when storing the current position of an element, just use the name of the node. Accesing the link part would give access to the next node in the list.
}

void print()
{
    struct node *temp;
    temp = top;
    printf("The elements of the stack are: ");
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n\n");
}

int main()
{
    int elem;
    while (1)
    {
        printf("Enter your choice\n1 to push,\n2 to print all the elements in the stack,\nand 3 to exit the process\n\n");
        int choice;
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d", &elem);
                push(elem);
                break;
            case 2:
                print();
                break;
            case 3:
                exit(1);
                break;
        }
    }
    return 0;
}