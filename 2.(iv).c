#include<stdio.h>
void main()
{
	float p,r,t,s_i;
	printf("Enter Principal,Rate and Time\n");
	scanf("%f%f%f",&p,&r,&t);
	s_i=(p*r*t)/100;
	printf("simple interest is %f",s_i);
}
