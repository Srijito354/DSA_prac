#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int push(node *list, int elem)
{
    node *head;
    list->data = elem;
    list->next = head;
    head = list;
}

int main()
{
    int elem;
    char ch;
    int choice;
    node *list, *head = NULL;
    list = (node *)malloc(sizeof(node));
    /*
    printf("Enter element: ");
    scanf("%d", &elem);
    push(head, elem);
    */
    printf("Would you like to enter elements: (y/n)");
    scanf("%c", &ch);
    if (ch == 'n')
    {
        break;
    }
    else
    {
        while (1)
        {
            printf("Press 1 for pushing elements into the array, 2 for popping, 3 for displaying the contents of the stack, and 4 for knowing the number of elements contained in the stack: ");
            scanf("%d", &choice);
            switch(choice)
            {
                case 1:
                    push(list, elem);
                case 2:
                    pop();
            }
        }
    }
}