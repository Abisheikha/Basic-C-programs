//program to check Niven number

#include<stdio.h>
void main()
{
	int num,sum=0,i,x,rem,temp;
    printf("Enter a number to check: ");
 	scanf("%d",&num);
 	temp=num;
 	while(temp!=0)
 	{
 		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
    }
    if(num%sum==0)
    	printf("%d is a Niven number\n",num);
	 else
	 	printf("%d is not a Niven number\n",num);
    
}
