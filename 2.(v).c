#include<stdio.h>
#include<math.h>
void main()
{
	float p,r,t,n,c_i,i,j;
	printf("Enter principal,rate(in percentage) and \n");
	scanf("%f%f%f",&p,&r,&t,&n);
	i=(1+r/100);
	j=t;
	c_i=p*pow(i,j);
	printf("%f",c_i);
}

