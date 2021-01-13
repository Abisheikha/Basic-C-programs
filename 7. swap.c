//program to swap two values 

#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter two values to swap: ");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("The numbers after swapping: %d %d",a,b);
}
