#include <stdlib.h>
#include <stdio.h>

#define MAX_LENGTH 1000

int front = -1, rear = -1;
int queue[MAX_LENGTH]; // Array of stack FIFO

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
		printf("Queue overflow !!!!");
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
		queue[rear] = val;
	}
	
}

void Delete(void)
{
	if(front < 0 || front > rear)
	{
		printf("Queue Hasn't been created yet !!!");
	}
	else
	{
		printf("FIFO POPED : %d\n", queue[front]);
		front ++;
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
		for(int i = front; i <= rear; i++)
		{
			printf("%d , ", queue[i]);
		}
	}
}