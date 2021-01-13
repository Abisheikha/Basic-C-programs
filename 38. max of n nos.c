// proogram to find the largest of n numbers

#include<stdio.h>
void main()
{
	int num,i,j;
	float a[100],max;
	printf("Enter how many numbers: ");
	scanf("%d",&num);
	printf("Enter the numbers: ");
	for(i=1;i<=num;i++)
	{
		scanf("%f",&a[i]);
	}
	max=a[0];
	for(i=1;i<=num;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("The largest among three numbers is %.2f",max);
	
}
