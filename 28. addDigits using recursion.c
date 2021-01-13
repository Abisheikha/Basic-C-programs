//program to add digits of a number using recursion

#include<stdio.h>
int main()
{
	int num,sum=0,rem;
    printf("Enter a number: ");
 	scanf("%d",&num);
 	sum=DigitsSum(num);
 	printf("The sum of digits is: %d",sum);
	 return 0;
}
int DigitsSum(int num)
{
	if(num==0)
		return 0;
	else
		return(num%10 + DigitsSum(num/10));
}
