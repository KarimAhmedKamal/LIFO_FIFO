#include <stdlib.h>
#include <stdio.h>

#define MAX_LENGTH 1000

int front = -1, rear = -1;
int stack[MAX_LENGTH]; // Array of stack LIFO

void Insert(void);
void Delete(void);
void Display(void);

int main(void)
{
	Insert();
	Insert();
	Insert();
	Delete();
	Display();
	return 0;
}

void Insert(void)
{
	int val =0;
	if(rear == (MAX_LENGTH - 1))
	{
		printf("Stack overflow !!!!");
	}
	else
	{
		printf("Please enter a value : ");
		scanf( "%d" ,&val);	
		if(front < 0)
		{
			++front;
		}
		++rear;
		stack[rear] = val;
	}
	
}

void Delete(void)
{
	if(front < 0 || front > rear)
	{
		printf("Stack Hasn't been created yet !!!");
	}
	else
	{
		printf("LIFO POPED : %d\n", stack[rear]);
		rear --;
	}
}

void Display(void)
{
	if(front < 0)
	{
		printf("Stack overflow!!");
	}
	else
	{
		printf("Stack : ");
		for(int i = 0; i <= rear; i++)
		{
			printf("%d , ", stack[i]);
		}
	}
}