#include<stdio.h>

void main()
{
	int a=3,b=6;
	printf("a=%d \nb=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d \nb=%d",a,b);
}
