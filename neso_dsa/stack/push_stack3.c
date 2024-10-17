#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} *top = NULL;

void push(int data)
{
    struct node *head = malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Stack Overflow");
    }

    head->data = data;
    head->link = top;
    top = head; //updating the top pointer
}

int pop()
{
    struct node *temp;
    temp = top;
    int val = temp->data;

    top = top->link;
    free(temp);
    temp = NULL;
    return val;
}

void print()
{
    struct node *temp;
    temp = top;
    while (temp!=NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    printf("Enter 1 for pushing, 2 for printing, 3 for popping the elements, and 4 for exiting the process: ");
    int choice, data;
    while (1)
    {
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                print();
                break;
            case 3:
                int val = pop();
                printf("Popped value: %d", val);
                break;
            case 4:
                printf("Exiting...\n");
                exit(1);
                break;
        }
    }
}