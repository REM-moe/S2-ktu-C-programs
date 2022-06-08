#include<stdio.h>
void main()
{
	int a[50],i,j,k,n,temp,print;
	printf("Enter the size of the arary\n");
	scanf("%d",&n);
	printf("Size entered is %d\n",n);
	printf("Enter the elements\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (j=1;j<n;j++)
	{
		for (k=0;k<n-j;k++)
		{
			if (a[k]>a[k+1]) // we can change > = ascending, <= descending //
			{
				temp = a[k]; // Swapping //
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	printf("Array Has Been Sorted !\n");
	printf("Sorted array : \n");
	for (print=0;print<n;print++)
	{
	printf("%d\n",a[print]);
	}
}
