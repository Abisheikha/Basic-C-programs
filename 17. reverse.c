//program to print the number in reverse order 

#include<stdio.h>
void main()
{
	int number,rev;
    printf("Enter a number to be reversed: ");
 	scanf("%d",&number);
 	while(number>0)
 	{ 
		rev=number%10;
		printf("%d",rev);
		number=number/10;
	 }
}
