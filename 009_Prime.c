#include <stdio.h>
void main()
{
	int num, count,i;
	printf("Enter number to check Prime or not \n");
	scanf("%d",&num);
	count = 0; 
	for (i=1;i<num;i++)
	{
		if (num%i == 0)
		{
			count = count++;
		}
	}
	if (count>=2)
	{
		printf("%d , is not a Prime Number \n",num);
	}
	else
	{
		printf("%d , is  Prime Number \n",num);
	}
}
