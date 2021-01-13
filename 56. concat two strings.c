//program to add two string without using concat() function

#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i=0,j=0;
	printf("Enter two strings for concatenation: ");
	scanf("%s%s",str1,str2);
	while(str1[i]!='\0')
	i++;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	printf("The string after concatenation is :%s",str1);
}
