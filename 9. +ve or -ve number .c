//program to check whether number is positive or negative

#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number to check: ");
	scanf("%d",&num);
	if(num>0)
		printf("The given number %d is positive number",num);
	else if(num<0)
		printf("The given number %d is negative number",num);
	else
		printf("The given number is 0");
}
