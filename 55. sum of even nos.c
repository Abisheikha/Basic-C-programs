//program to calculate the sum of even numbers from 1 to n

#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter a number upto which even numbers should be displayed: ");
	scanf("%d",&n);
	printf("The even numbers upto %d are :\n",n);
	for(i=2;i<=n;i+=2)
	{
		printf("%d ",i);
		sum+=i;
	}
	printf("\nThe sum of even numbers is %d",sum);
}
