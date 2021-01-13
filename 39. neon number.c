//program to check whether the number is neon number or not

#include<stdio.h>
void main()
{
	int num,sum=0,i,x,rem;
    printf("Enter a number to check: ");
 	scanf("%d",&num);
 	x=num*num;
 	for(i=1;i<=x;i++)
 	{
 		rem=x%10;
		sum=sum+rem;
		x=x/10;
	 }
	 if(sum==num)
	 	printf("%d is a neon number\n",num);
	 else
	 	printf("%d is not a neon number\n",num);
}
