//program to swap two numbers using pointer

#include<stdio.h>
int main()
{
	int num1,num2,*x,*y,temp;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	printf("Before swapping num1= %d and num2= %d",num1,num2);
	x=&num1;
	y=&num2;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("\nAfter swapping num1= %d and num2= %d ",num1,num2);
	return 0;
}
