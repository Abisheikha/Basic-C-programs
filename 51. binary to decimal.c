// C program to convert the binary into decimal

#include <stdio.h> 
void main()
{
    int binary, decimal = 0, base = 1, rem;
    long long num;
    printf("Enter a binary number: \n");
    scanf("%lld", &num); 
    binary = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal = decimal + rem * base;
        num = num / 10 ;
        base = base * 2;
}
    printf("The decimal number is %d \n", decimal);
}
