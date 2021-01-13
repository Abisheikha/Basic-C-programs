//program to accept rollnumber and marks of three subjects and print total marks,average and grade

#include<stdio.h>
void main()
{
	int rollno,sub1,sub2,sub3,total;
    float avrg;
    printf("Enter Roll Number of the student : ");
 	scanf("%d",&rollno);
  	printf("Enter three subject marks : ");
    scanf("%d%d%d",&sub1,&sub2,&sub3);
 	total=sub1+sub2+sub3;
    avrg=total/3;
    printf("\nThe total marks is %d",total);
    printf("\nThe average of three subject is  %5.2f %",avrg);
 	if(avrg>=80)
    	printf("\nGrade: A");
	else if((avrg>=60)&&(avrg<80))
    	printf("\nGrade: B");
    else if((avrg>=50)&&(avrg<60))
 	    printf("\nGrade: C");
 	else if((avrg>=35)&&(avrg<50))
 		 printf("\nGrade: D");
 	else
 		printf("\nGrade: F");

}


