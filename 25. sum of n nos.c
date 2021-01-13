//program to add n numbers

#include<stdio.h>
void main()
{
	int i,num,sum=0,x;
	printf("Enter a number: ");
    scanf("%d",&num);
    i=0;
    printf("Enter the numbers to add:\n");
    while(i<num)
    {
    	scanf("%d",&x);
    	sum+=x;
    	i++;
	}
	printf("The sum is %d",sum);
}
