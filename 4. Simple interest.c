//program to Simple Interest

#include<stdio.h>
void main()
{
	float SI,p,n,r;
	printf("Enter principal amount,time,rate of interest");
	scanf("%f%f%f",&p,&n,&r);
	SI=p*n*r/100;
	printf("The simple interest is %.2f",SI);
	
}
