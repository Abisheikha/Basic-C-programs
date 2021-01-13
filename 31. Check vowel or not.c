//program to check whether alphabet is a vowel or not

#include<stdio.h>
void main()
{
	char alp;
	printf("Enter an alphabet to check: ");
	scanf("%c",&alp);
	if(alp=='A'||alp=='a'||alp=='E'||alp=='e'||alp=='I'||alp=='i'||alp=='O'||alp=='o'||alp=='U'||alp=='u')
		printf("%c is a vowel",alp);
	else
		printf("%c is a consonant",alp);
}
