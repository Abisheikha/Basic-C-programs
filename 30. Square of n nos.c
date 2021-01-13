//program to calculate square of n numbers

#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("The square of numbers are ");
	for(i=1;i<=num;i++)
	{
		printf("%d ",i*i);
	}
}
