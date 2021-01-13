//program to print sum of n prime numbers

#include<stdio.h>
void main()
{
	int n,flag=0,i,j,sum=0;
    printf("Enter a number: ");
 	scanf("%d",&n);
 	printf("The prime numbers are: ");
 	for(j=2;j<=n;j++)
 	{
	flag=0; 
 	for(i=2;i<=j;i++)
 	{
 	  if(j%i==0)
	   {
	   	 flag++;
	   }	
	 }
	if(flag==1)
	{
	printf("%d ",j);
	sum=sum+j;
	}
    }
	printf("\nThe sum of prime numbers is %d",sum);	
}
