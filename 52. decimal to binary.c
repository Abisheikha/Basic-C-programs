// C program to convert the decimal number into binary

#include <stdio.h> 
void main()
{
    int  num,rem,i=1;
    long long res=0;
    printf("Enter decimal number: \n");
    scanf("%d", &num); 
    while (num!=0)
    {
        rem = num % 2;
        num = num / 2 ;
        res+=rem*i;
        i*=10;
	}
    printf("The binary number is %lld \n", res);
}
