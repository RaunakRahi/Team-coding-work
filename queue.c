#include<stdio.h>
#include<stdlib.h>
#define NUM 100
void insert();
void delete();
void display();
int queue_array[NUM];
int rear=-1;
int front=-1;
main()
{
	int n;
	while(2)
	{
		printf("Press 1 for Insert element to queue\n");
		printf("Press 2 for Delete element from queue\n");
		printf("Press 3 for Display all element of queue\n");
		printf("press 4 TO CLOSE");
		printf("\nEnter choice: ");
		scanf("%d",&n);
	
			switch(n)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				default:
				printf("Wrong choice\n");
		}
	}
}
void insert()
{
	int add;
	if(rear==NUM-1)
	printf("Queue Overflow\n");
	else
	{
		if(front==-1)
		front=0;
		printf("Insert the element in queue :");
		scanf("%d",&add);
		rear=rear+1;
		queue_array[rear]=add;
	}
}
void delete()
{
	if(front==-1||front>rear)
	{
		printf("Queue Underflow\n");
	}
	else
	{
		printf("Element delete from queue is %d\n",queue_array[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
		printf("queue is empty\n");
	else
	{
		printf("Queue is : \n");
		for(i=front;i<=rear;i++)
		printf("%d\n",queue_array[i]);
	}
}
