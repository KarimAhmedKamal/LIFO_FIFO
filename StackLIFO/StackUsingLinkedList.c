#include <stdlib.h>
#include <stdio.h>

typedef struct node{
	int data;
	struct node * next;
}Node;

Node* CreateList(int data);
Node* AddNode(int data, Node * head);
void PrintList(Node * head);
void DeleteNode(Node ** head);


int main(void)
{
	Node* head = NULL;
	int user_input = 0, data = 0;
	while(user_input != 3)
	{
		printf("To add node enter 0\nTO print the linked list enter 1\nTo Delete Node press 2\nto exit press 3\nYour choice: ");
		scanf("%d",&user_input);
		switch(user_input)
		{
			case 0:
				printf("Please Enter Node Value:");
				scanf("%d",&data);
				(head == NULL) ? (head = CreateList( data )) : (head = AddNode( data , head ));
				(head == NULL) ? printf("No memory for this Node....Sorry :(\n") : printf("Node Added Thank You...:D\n");
				break;
			case 1:
				(head == NULL) ? printf("No List has been created\n") : PrintList(head);
				printf("\n");
				break;
			case 2:
				(head == NULL) ? printf("No List has been created\n") : DeleteNode(&head);
				printf("\n");
				break;
			case 3:
				printf("Thank you \n GOOD BYE \n");
				break;
		}
		printf("-------------------------------------------------\n");
	}
	return 0;
}

Node* CreateList(int data)
{
	Node* head = (Node*) malloc(sizeof(Node));
	if(head != NULL)
	{
		head->data = data;
		head->next = NULL;
	}
	return head;
}

Node* AddNode(int data, Node* head)
{
	Node* newNode = (Node*) malloc(sizeof(Node));
	if(newNode != NULL)
	{
		newNode->data = data;
		newNode->next = head;
		head = newNode;
	}
	return head;
}

void PrintList(Node* head)
{
	Node* list = head;
	while(list != NULL)
	{
		printf("%d , ", list->data);
		list = list->next;
	}
}

void DeleteNode(Node ** head)
{
	if(head == NULL)
	{
		printf("No List Created\n");
	}
	else
	{
		Node* temp = *head;
		*head = (*head)->next;
		free(temp);
		printf("Head node is deleted :) \n");
	}
}