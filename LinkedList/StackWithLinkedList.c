#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *ptr;
}node;

void push(node **, int);
int pop(node **);
int display(node *);
int count(node *);

int main(void)
{
	node *top;
	int ch, num;
	top = NULL;
	int n;
	while(1)
	{
		printf("\n\nWhat do you wanna do?");
		printf("\n1 for push, 2 for pop, 3 for displaying the contents, and 4 for seeing the number of elements");
		scanf("%d", &n);
		switch(n)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				count();
				break;
		}
	}
	void push(node **, int num)
	{
		node *p;
		p = (node *)malloc(sizeof(node));
		p->data = num;
		p->next = p;
		*s = p;
	}
	int pop(node **, s)
	{
		node *temp;
		int item;
		if (*s == NULL)
		{
			printf("\n Stack Overflow: ");
			exit(0);
		}
		else
		{
			temp = *s;
			item = temp->data;
			
