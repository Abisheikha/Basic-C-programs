//program to n prime numbers

#include<stdio.h>
void main()
{
	int n,flag=0,i,j;
    printf("Enter a number upto which prime number should be displayed: ");
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
	printf("%d ",j);
    }
	
}
