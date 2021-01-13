//program to print numbers from 1 to n using while loop

#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter a number upto which numbers should be displayed: ");
	scanf("%d",&n);
	printf("The numbers from 1 to %d are :\n",n);
	i=1;
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
}
