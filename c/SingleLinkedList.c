#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct node {
	struct node *next;
	int data;
}Node;

Node *head = NULL;

void create()
{
	char ch;
	Node *newNode, *currentNode = NULL;
	do
	{
		newNode = (Node*)malloc(sizeof(Node));
		newNode->next = NULL;

		printf("\nEnter the data :");
		scanf("%d", &newNode->data);

		if (head == NULL)
		{
			head = newNode;
		}
		else
		{
			currentNode->next = newNode;
		}
		currentNode = newNode;
		printf("Do you want to create another ?");
		ch = getche();
	} while (ch != 'n');
}

void display()
{
	printf("\n");
	while (head != NULL)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}

int main()
{
	char ch;
	create();
	display();

	ch = getche();
}