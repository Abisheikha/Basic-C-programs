//program to add n numbers using array

#include<stdio.h>
void main()
{
	int num,sum=0,i,a[100];
    printf("Enter a number: ");
 	scanf("%d",&num);
 	printf("Enter the numbers\n");
 	for(i=0;i<num;i++)
 	{
 	  scanf("%d",&a[i]);
 	  sum=sum+a[i];
	 }
	printf("The sum of digits is: %d",sum);
}
