#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} nd;

nd *push(nd *head, int elem)
{
    nd *list;
    if (head==NULL)
    {
        nd *list=(nd *)malloc(sizeof(nd));
        list->data=elem;
        list->next=NULL;
        head=list;
    }
    else
    {
        nd *list=(nd *)malloc(sizeof(nd));
        list->data=elem;
        list->next=head;
        head=list;
    }
    return head;
}

void display(nd *head)
{
    nd *temp;
    temp = head;
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
}

int main()
{
    int elem;
    char ch;
    int choice;
    nd *head = NULL;
    /*
    printf("Enter element: ");
    scanf("%d", &elem);
    push(head, elem);
    */
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
                    head=push(head, elem);
                    break;
                case 2:
                    //pop();
                    printf("Tf, ya doing here!");
                case 3:
                    display(head);
                    break;
               case 4:break;
                        goto exit;
                default:printf("No probs!");
            }

        }
        exit:
        printf("Quited");
    }
}