//program to print first n even numbers

#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter a number upto which even numbers should be displayed: ");
	scanf("%d",&n);
	printf("The even numbers upto %d are :\n",n);
	i=2;
	do
	{
		printf("%d ",i);
		i+=2;
	}while(i<=n);
}
