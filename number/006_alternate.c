#include<stdio.h>
void main()
{
	int a,b,c,large;
	printf("enter number a,b,c : \n ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		large=a;
		if (large>c)
		{
			printf("largest among %d,%d,%d is %d \n",a,b,c,large);
		}
		else
		{
			printf("largest among %d,%d,%d is %d \n",a,b,c,c);		
		}	
	}
	else 
	{
		large=b;
		if (large>c)
		{
			printf("largest among %d,%d,%d is %d \n",a,b,c,large);
		}
		else
		{
			printf("largest among %d,%d,%d is %d \n",a,b,c,c);		
		}
	}	
}
