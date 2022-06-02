#include <stdio.h>
void main()
{
	int a,b ;
	printf("Enter 2 numbers to check largest among \n");
	scanf("%d%d",&a,&b);
	printf("%d,%d |entered detected|\n",a,b);
	if (a>b)
	{
	printf("%d , is the Largest !\n",a);
	}
	
	else 
	{
	printf("%d , is the Largest !\n",b);
	}
}
