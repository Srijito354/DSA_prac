#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} *top = NULL; //Declaring the top pointer.

void push(int data)
{
    struct node *head = malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Stack overflow");
        exit(1);
    }

    head->data = data;

    head->link = top;
    top=head; // Updating the top pointer with the address of the current node.
}

void print()
{
    struct node *temp;
    temp = top;
    printf("Here are the elements printed for you: ");
    while(temp)
    {
        printf("%d  ", temp->data);
        temp = temp->link;
    }
}

int main()
{
    int data, choice;
    while(1)
    {
        printf("\nEnter choice: \n");
        printf("1 for pushing, 2 for printing, and 3 for exiting from the operations: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &data);
                push(data);
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