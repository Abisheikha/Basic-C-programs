//program to check odd or even

#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number to check whether odd or even: ");
	scanf("%d",&num);
	if(num==0)
		printf("The given number is neither positive nor negative number");
	else if(num%2==0)
		printf("The given number is even number");
	else
		printf("The given number is odd number");
}
