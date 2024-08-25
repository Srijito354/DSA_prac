#include <stdio.h>
#include <stdlib.h>

struct lk1
{
    int data;
    struct lk1 *next;
};

struct lk1 *head; // Global pointer to the head of the linked list. By default initialized to NULL.

void beginsert()
{
    struct lk1 *ptr; // Pointer to store the address of the newly created node.
    int item;
    ptr = malloc(sizeof(struct lk1));
    if (ptr == NULL)
    {
        printf("\nOverflow");
    }

    else
    {
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data=item;
        ptr->next=head;
        printf("\nNode inserted!");
    }
}


void display()
{
    struct lk1 *ptr;
    ptr=malloc(sizeof(struct lk1));
    ptr=head;
    if (ptr==NULL)
    {
        printf("\nGo, fuck yourself!!!");
    }
    while (ptr!=NULL)
    {
        printf("\n%d", ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    int option;
    while (option!=3)
    {
        scanf("%d", &option); 
        switch(option)
        {
            case 1:
            beginsert();
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
            break;
        }
        return 0;
    }
}