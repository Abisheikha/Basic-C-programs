//program to check armstrong number or not

#include<stdio.h>
#include<math.h>
void main()
{
	int number,rem,sum=0,temp,times=0;
    printf("Enter a number to check whether it is armstrong or not: ");
 	scanf("%d",&number);
 	temp=number;
 	while(temp!= 0) 
   {
      times = times + 1;
      temp = temp / 10;
   }
   temp=number;
 	while(number>0)
 	{ 
		rem=number%10;
		sum=sum+pow(rem,times);
		number=number/10;
	 }
	 if(temp==sum)
	 	printf("It is armstrong number");
	else
		 printf("It is not an armstrong number");
}
