//program to print average of numbers

#include<stdio.h>
void main()
{
	int i,num;
	float x,avg,sum=0;
	printf("Enter how many numbers: ");
    scanf("%d",&num);
    i=0;
    printf("Enter the numbers to add:\n");
    while(i<num)
    {
    	scanf("%f",&x);
    	sum+=x;
    	i++;
	}
	avg=sum/num;
	printf("The average of numbers is %.2f",avg);
}
