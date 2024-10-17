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

int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int pop()
{
    struct node *temp;
    temp = top;
    if (isEmpty())
    {
        printf("Stack Underflow. \n");
        exit(1);
    }
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
    if (isEmpty())
    {
        printf("Stack Underflow. \n");
        exit(1);
    }
    while (temp!=NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int peek() //returns top most element of the list
{
    struct node *new;
    new = top;
    printf("Here's the top-most element: %d\n", new->data);
}

int main()
{
    printf("Enter 1 for pushing, 2 for printing, 3 for popping the elements, 4 for peeking into, and 5 for exiting the process: ");
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
                peek();
                break;
            case 5:
                printf("Exiting...\n");
                exit(1);
                break;
        }
    }
}