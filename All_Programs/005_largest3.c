#include <stdio.h>
void main()
{
	int a,b,c ;
	printf("Enter 3 numbers to check largest among \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("%d,%d,%d |entered detected|\n",a,b,c);
	if (a>b)
		{
			if (a>c)
			{
				printf("%d , is The Largest!",a);
			}
			else
			{
				printf("%d , is The Largest!",c);
			}
		}
	else
	{
		if (b>c)
		{
			printf("%d , is The Largest!",b);
		}
		else 
		{
			printf("%d , is The Largest!",c);
		}
	}
}
