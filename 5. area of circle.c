//program to accept value of radius and print area of a circle

#include<stdio.h>
void main()
{
	float radius,area,pi=3.14;
	printf("Enter radius of circle: ");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("The area of cirle is %.2f",area);
}
