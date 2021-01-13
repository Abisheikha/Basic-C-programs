//program to print whether the number is prime number or not

#include<stdio.h>
void main()
{
	int num,flag=0,i;
    printf("Enter a number to find whether it is prime or not: ");
 	scanf("%d",&num);
 	for(i=2;i<=num;i++)
 	{
 	  if(num%i==0)
	   {
	   	 flag++;
	   }	
	 }
	if(num==1)
		printf("It is neither prime nor composite number");
	else if(flag==1)
	 	printf("%d is a prime number",num);
	else
		printf("%d is not a prime number",num);
}
