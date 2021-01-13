//program to find the power of a number

#include<stdio.h>
void main()
{
	int base,exponent,result=1,i;
	printf("Enter the base: \n");
	scanf("%d",&base);
	printf("Enter the exponent: \n");
	scanf("%d",&exponent);
	for(i=0;i<exponent;i++)
	{
		result=result*base;
	}
	printf("The result is: %d",result);
	
}
