//program to print numbers from n to 1 using do while loop

#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter a number from which to start: ");
	scanf("%d",&n);
	printf("The numbers from %d to %1 are :\n",n);
	i=1;
	do
	{
		printf("%d ",n);
		n--;
	}while(n>=i);
}
