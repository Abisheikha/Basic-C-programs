//program to compare strings without using strcmp()

#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i=0,flag=0;
	printf("Enter two strings for comparing: ");
	scanf("%s%s",str1,str2);
	while(str1[i]!='\0'&&str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			flag=1;
			break;
        }
        i++;
	}
	if(flag==0&&str1[i]=e='\0'&&str2[i]=='\0')
		printf("The strings are same");
	else
		printf("The strings are different");
}
