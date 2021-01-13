//program to compare strings

#include<stdio.h>
#include<stdlib.h>
void main()
{
	char str1[100],str2[100];
	int x;
	printf("Enter two strings for comparing: ");
	scanf("%s%s",str1,str2);
	x=strcmp(str1,str2);
	if(x==0)
		printf("The strings are same");
	else
		printf("The strings are different");
}
