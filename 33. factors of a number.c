//program to accept a number and print the factors of that number

#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter the number to find its factors: ");
	scanf("%d",&num);
	printf("The factors of %d are: ",num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			printf("%d ",i);
		
	}
}
