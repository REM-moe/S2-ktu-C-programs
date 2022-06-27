#include<stdio.h>
struct
{
 int rno;
 char name[30];
 float mar_for_c;
}stud[30];
int main()
{
	int i,nu,sum;
	float avg;
	avg = 0;
	printf("Enter number of students : \n");
	scanf("%d",&nu);
	for (i=0;i<nu;i++)
	{
		printf("Enter the Student Roll No \n");
		scanf("%d",&stud->rno);
		printf("Enter the Student Name ! \n");
		scanf("%s",stud->name);
		printf("Enter mark obtained in PIC ! \n");
		scanf("%f",&stud->mar_for_c);
		avg += stud->mar_for_c/nu;
	}
	printf("Avergae marks obtained in C is = %0.3f \n",avg);
return 0 ;
}
