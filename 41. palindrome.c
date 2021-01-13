//program to check whether the number is palindrome or not

#include<stdio.h>
#include<math.h>
void main()
{
	int number,rem,rev,temp;
    printf("Enter a number to check whether it is palindrome or not: ");
 	scanf("%d",&number);
 	temp=number;
 	while(number>0)
 	{ 
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
	 }
	 if(temp==rev)
	 	printf("%d is a palindrome number\n",temp);
	else
		 printf("%d is not a palindrome number",temp);
}
