//program to accept two integer numbers and print the GCD

#include<stdio.h>
void main()
{
	int i,num1,num2,gcd;
	printf("Enter the two numbers: ");
	scanf("%d%d",&num1,&num2);
	for(i=1;i<=num1&&i<=num2;i++)
	{
		if(num1%i==0&&num2%i==0)
		{
			gcd=i;
		}
	}
	printf("The gcd of two nos is: %d",gcd);
} 
