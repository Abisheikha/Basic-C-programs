//program to check a perfect number

#include<stdio.h>
void main()
{
	int num,i,sum=0;
	printf("Enter a number to check: ");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum+=i;
		}
	}
	if(sum==num)
    	printf("\n%d is a perfect number\n",num);
	 else
	 	printf("\n%d is not a perfect number\n",num);
}
