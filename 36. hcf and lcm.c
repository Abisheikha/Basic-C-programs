//program to calculate HCF and LCM

#include<stdio.h>
int main()
{
	int i,num1,num2,hcf,lcm,temp,x,y;
	printf("Enter the two numbers: ");
	scanf("%d%d",&num1,&num2);
	x=num1;
	y=num2;
	while(y!=0)
	{
		temp=y;
		y=x%y;
		x=temp;
	}
	hcf=x;
	lcm=(num1*num2)/hcf;
	printf("The hcf of two nos is: %d\n",hcf);
	printf("The lcm of two nos is: %d",lcm);
	return 0;
}
