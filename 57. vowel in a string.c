// program to check vowels

#include<stdio.h>
int main()
{
	int i, str_length=0;
	char str[50];
	printf("\nEnter a string: ");
	scanf("%[^\n]s", str);
	//str_length = strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		str_length++;
	}
	for(i = 0; i < str_length; i++)
	{
		if(str[i] == 'a' || str[i] == 'e' ||
			str[i] == 'i' || str[i] == 'o' || 
			str[i] == 'u' || str[i] == 'A' ||
			str[i] == 'E' || str[i] == 'I' ||
			str[i] == 'O' || str[i] == 'U')
		
			printf("Vowel %c is found at location %d\n",str[i], i );
	}
	return 0;
}
