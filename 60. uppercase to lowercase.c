//program to convert string from lowercase to uppercase

#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i;
	printf("Enter a string to convert into lowercase: ");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			str[i]+=32;
		}
	}
	printf("The string in lower case is %s",str);
}
