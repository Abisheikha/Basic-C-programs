//program to print largest among two numbers

#include<stdio.h>
void main()
{
	float num1,num2;
	printf("Enter the two numbers ");
	scanf("%f%f",&num1,&num2);
	if(num1>num2)
		printf("The largest number is %.2f",num1);
	else
		printf("The largest number is %.2f",num2);
}
