//WAP to simply takes elements of the array from the user and finds the sum of these elements.

#include<stdio.h>
void main()
{
	int n,i;
	int sum=0;
	
	printf("Enter size of array = ");
	scanf("%d",&n);
	
	int array[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter value at array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<n;i++)
	{
	  sum=sum+array[i];	
	}
	
	printf("\n\nSum of the elements of array = %d",sum);
}


