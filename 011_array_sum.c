#include<stdio.h>
void main()
{
	int a[30],sum,i,size;
	printf("Enter size of array\n");
	scanf("%d",&size);
	printf("Size entered is, %d\n",size);
	printf("Enter elements\n");
	sum = 0;
	for (i=0;i<size;i++)
	{
		scanf("%d",&a[i]); // scans a[i] , i = 0 to n //
		sum = sum +a[i]; // sum = sum+a[0] = 0 + first element entered//
	}
	printf("Sum is %d \n",sum);
}
