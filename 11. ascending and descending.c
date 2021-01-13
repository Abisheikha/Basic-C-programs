//program to accept three numbers and print it in ascending and descending order

#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if((a<=b)&&(a<=c))
	{
		if(b<=c)
		{
			printf("The ascending order is: %d %d %d\n",a,b,c);
			printf("The descending order is: %d %d %d",c,b,a);
		}
		else
		{
			printf("The ascending order is: %d %d %d\n",a,c,b);
			printf("The descending order is: %d %d %d",b,c,a);
		}
	}
	else if((b<=a)&&(b<=c))
	{
		if(a<=c)
		{
			printf("The ascending order is: %d %d %d\n",b,a,c);
			printf("The descending order is: %d %d %d",c,a,b);
		}
		else
		{
			printf("The ascending order is: %d %d %d\n",b,c,a);
			printf("The descending order is: %d %d %d",a,c,b);
		}
	}
	else if((c<=a)&&(c<=b))
	{
		if(a<=b)
		{
			printf("The ascending order is: %d %d %d\n",c,a,b);
			printf("The descending order is: %d %d %d",b,a,c);
		}
		else
		{
			printf("The ascending order is: %d %d %d\n",c,b,a);
			printf("The descending order is: %d %d %d",a,b,c);
		}
	}
	
		
}
