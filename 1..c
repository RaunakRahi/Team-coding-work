//1=> Create a linked list which take integer numbers from user according to user choice(DMA). calculate the add and print it.
#include<stdio.h>
#include<stdlib.h>
void create();
void show();
struct std
{
	int rno;
	struct std *next;
};
struct std  *start=NULL,*temp,*node;
void main()
{
	create();
	show();
}
void create()
{
	int choice;
	int n=1;
	printf("How many number you want to add = ");
	scanf("%d",&choice);
	do
	{
		node=(struct std*)malloc(sizeof(struct std));
		printf("\nEnter %d numbers : ",n);
		n++;
		scanf("%d",&node->rno);
		node->next=NULL;
		if(start==NULL)
		{
			temp=node;
			start=node;
		}
		else
		{
			temp->next=node;
			temp=temp->next;
		}
		fflush(stdin);
		choice--;
	}
	while(choice != 0);
}

void show()
{
	int sum=0;
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		sum = sum + temp->rno;
	}
	printf("\nSum of numbers = %d",sum);}
