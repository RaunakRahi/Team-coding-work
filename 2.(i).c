#include<stdio.h>
void main()
{
	float fahr,cel;
	printf("Enter temp in fahr=");
	scanf("%f",&fahr);
	
	cel=(fahr-32)*5/9;
	printf("Temp in celcius is %f",cel);
	
}
