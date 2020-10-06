//2=> Create a linked list of floating point values and display it.
#include<stdio.h>
#include<stdlib.h>
void create();
void show();
struct std
{
	float rno;
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
	printf("How many number you want to Display = ");
	scanf("%d",&choice);
	do
	{
		node=(struct std*)malloc(sizeof(struct std));
		printf("\nEnter %d numbers : ",n);
		n++;
		scanf("%f",&node->rno);
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
	printf("\nList of numbers are :");
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		printf("\n%f",temp->rno);
	}
}
