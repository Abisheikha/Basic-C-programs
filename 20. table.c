//program to print table of a number

#include<stdio.h>
void main()
{
	int num,sum=0,i;
    printf("Enter a number to print its table: ");
 	scanf("%d",&num);
 	for(i=1;i<=10;i++)
 	{
 	  printf("%d X %d= %d\n",i,num,num*i);	
	 }
}
