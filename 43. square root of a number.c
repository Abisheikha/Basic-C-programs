//program to find the square root of a number

#include<stdio.h>
void main()
{
	int num,i;
	float sqrt,temp;
	printf("Enter a number to find: ");
	scanf("%d",&num);
	sqrt=num/2;
	temp=0;
	while(sqrt!=temp)
	{
		temp=sqrt;
		sqrt=(num/temp+temp)/2;
	}
	printf("The square root of %d is %.2f",num,sqrt);
}
