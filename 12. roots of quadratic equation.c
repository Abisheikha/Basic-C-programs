//program to find the roots of a quadratic equation

#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,root1,root2,discriminant,x,y;
	printf("Enter the coefficients of a,b and c\n");
	scanf("%f%f%f",&a,&b,&c);
	discriminant=b*b-4*a*c;
	if(discriminant==0)
	{
		printf("Both roots are real and equal\n");
		root1=root2=-b/(2*a);
		printf("Root1= %.2f\nRoot2= %.2f\n",root1,root2);
	}
	else if(discriminant>0)
	{ 
	    printf("Both roots are real and different\n");
		root1=(-b+ sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("Root1= %.2f\nRoot2= %.2f\n",root1,root2);
	}
	else
	{
        printf("Both roots are real and complex\n");
		x=-b/(2*a);
		y=sqrt(-discriminant)/(2*a);	
		printf("Root1= %.2f+%.2fi\nRoot2= %.2f-%.2fi\n",x,y,x,y);
	}
	
}
