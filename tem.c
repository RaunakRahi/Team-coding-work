#include<stdio.h>
void sum(int,int);
void sub(int,int);
void main()
{
	int a,b;a=10;b=2;
	sum(a,b);
	sub(a,b);
	
}
void sum(int a,int b)
{
	printf("sum%d",(a+b));
}
void sub(int a,int b)
{
	printf("substraction %d",(a-b));
}
