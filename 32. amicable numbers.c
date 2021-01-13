//program to take two numbers and check whether they are amicable umbers or not

#include<stdio.h>
void main()
{
	int num1,num2,i,sum1=0,sum2=0,j;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	for(i=1;i<num1;i++)
	{
		if(num1%i==0)
		{
			sum1=sum1+i;
		}		
	}
	for(j=1;j<num2;j++)
	{
		if(num2%j==0)
		{
			sum2=sum2+j;
		}
	}
	if(num1==sum2 && num2==sum1)
		printf("%d and %d are amicable numbers",num1,num2);
	else
		printf("%d and %d are not amicable numbers",num1,num2);
}
