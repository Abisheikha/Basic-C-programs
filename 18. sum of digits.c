//program to print sum of digits

#include<stdio.h>
void main()
{
	int num,sum=0,i;
    printf("Enter a number: ");
 	scanf("%d",&num);
 	i=1;
 	while(i<=num)
 	{
 	  sum+=i;
	   i++;	
	 }
	printf("The sum of digits is: %d",sum);
}
