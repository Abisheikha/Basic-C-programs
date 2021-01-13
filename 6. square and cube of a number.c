//program to accept a number from user and print its square and cube 

#include<stdio.h>
void main()
{
	float num;
	printf("Enter a number to find its square and cube: ");
	scanf("%f",&num);
	printf("The square of %.2f is %.2f\n",num,num*num);
	printf("The cube of %.2f is %.2f",num,num*num*num);
}
