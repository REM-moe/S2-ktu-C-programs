#include <stdio.h>
void main()
{
	int n,i ; // i for loop and n to store range //
	printf("Enter the range to be printed\n ");
	scanf("%d",&n);
	for (i=1 ; i<n+1 ; i++) // i start from 1 and i++ means i value increases by 1 //
	{
		// body of loop executes untill loop is (i<n+1 = true)//
		printf("%d\n",i);
	}
}
