#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}node;

void push(node *head)
{
    int n, loc_data;
    printf("Enter the number of elements you want in the stack.");
    scanf("%d", &n);
    for (int i = 0; i<n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &loc_data);
        node *current = malloc(sizeof(node));
        current->data = loc_data;
        current->link = NULL;
        head->link = current;
        head = head->link;
    }
}

void count_and_print(node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("Stack is empty");
    }
    node *ptr = NULL;
    ptr = head;
    while (ptr!=NULL)
    {
        count += 1;
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
    printf("%d", count);
}

int main()
{
    node *head = NULL;
    push(head);
}