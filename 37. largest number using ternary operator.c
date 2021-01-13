//program to find the largest among 3 numbers using ternary operator

#include<stdio.h>
void main()
{
	float num1,num2,num3,largest;
	printf("Enter the three numbers ");
	scanf("%f%f%f",&num1,&num2,&num3);
	largest=((num1>num2)? (num1>num3 ? num1 : num3) : (num2>num3 ? num2:num3));
	printf("The largest among three numbers is %.2f",largest);
}
