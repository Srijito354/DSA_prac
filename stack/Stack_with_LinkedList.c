#include <stdio.h>
#include <stdlib.h>

// Declaring the LinkedList.
typedef struct node
{
    int data;
    struct node *next;
} node;

int push(node *head, int elem)
{
    node *list;
    list = (node *)malloc(sizeof(node));
    list->data = elem;
    list->next = head;
    head = list;
}

int main()
{
    /*
    node *list, *head = NULL;
    int elem;
    list = (node *)malloc(sizeof(node));
    printf("Enter element: ");
    scanf("%d", &elem);
    list->data =  elem;
    list->next = head;
    head = list;

    node *temp;
    temp = head;
    printf("%d", temp->data);
    */
    char ans;
    int elem;
    node *head = NULL;
    printf("You wanna enter elements?: (y/n)");
    scanf("%c", &ans);
    if (ans = 'n')
    {
        head = NULL;
    }
    else
    {
        while (1)
        {
            printf("Enter element: ");
            scanf()
        }
    }
}