//program to swap two numbers using bitwise XOR

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	printf("Before swapping num1= %d and num2= %d",num1,num2);
	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;
	printf("\nAfter swapping num1= %d and num2= %d ",num1,num2);
	return 0;
}
