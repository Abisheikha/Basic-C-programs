//program to add two numbers using pointer

#include<stdio.h>
int main()
{
	int num1,num2,*x,*y,sum;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	x=&num1;
	y=&num2;
	sum=*x+*y;
	printf("The addition of two numbers is: %d",sum);
	return 0;
}
