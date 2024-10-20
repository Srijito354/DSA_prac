#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

nd *push(node *head, int elem)
{
    node *list;
    if (head == NULL)
    {
        node *list = (node *)malloc(sizeof(node));
        list->data = elem;
        list->next = NULL;
        head = list;
    }

    else{
        node *list = (node *)malloc(sizeof(node));
        list->data = elem;
        list->next = head;
        head = list;
    }
    return head;
}

int display(node *list, node *head)
{
    node *temp;
    temp = head;
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int elem;
    char ch;
    int choice;
    node *list, *head = NULL;
    list = (node *)malloc(sizeof(node));
    printf("Would you like to enter elements: (y/n)");
    scanf("%c", &ch);
    if (ch == 'n')
    {
        printf("Okay, nvm!");
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
                    printf("Enter element: ");
                    scanf("%d", &elem);
                    head = push(head, elem);
                    break;
                case 2:
                    //pop();
                    printf("Tf, ya doing here!");
                case 3:
                    display(list, head);
                    break;
                if (choice == 3)
                {
                    break;
                }
            }
        }
    }
}