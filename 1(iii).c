#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a number a=");
	scanf("%d",&a);
	printf("Enter a number b=");
	scanf("%d",&b);
	
	c=a+b;
	a=c-a;
	b=c-b;
	printf("After swaping\na=%d\nb=%d",a,b);
	
}

