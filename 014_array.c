// read and print an array //
// array = list of elements [0,1,2,3,....n] these have index values which start from 0 //
// ex [1,2,3,5,6,8] size = 6 index always equal to 0 t0 size -1 //

#include<stdio.h>
void main()
{
	int n[50] ;
	int size,i,l; // declare size of array int array_name[size]; , {i and l for loop} //
	printf("enter size of array \n");
	scanf("%d",&size);
	printf("Enter elements one-by-one :) \n");
	for (i=0;i<size;i++)
	{
		scanf("%d",&n[i]); // a[0] first wlwm. then next then next untill the array is full//
	}
	printf("Elements are => \n");
	// we use a loop to acces elements by their index values and pritn them //
	for (l=0; l<size;l++)
	{
	printf("%d \n",n[l]);
	}

}
