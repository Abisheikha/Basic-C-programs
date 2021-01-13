//program to print factorial of a number

#include<stdio.h>
void main()
{
	int num,fact=1,i;
    printf("Enter a number to find its factorial: ");
 	scanf("%d",&num);
 	for(i=1;i<=num;i++)
 	{
 	  fact=fact*i;	
	 }
	 printf("The factorial of %d is %d",num,fact);
}
