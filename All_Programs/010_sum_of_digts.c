#include<stdio.h>
void main()
{
	// sum of digits of number //
	int num, temp,r,s;
	s=0;
	printf("Enter a Number \n ");
	scanf("%d",&num);
	temp = num; // for better output (optional) //
	while (num!=0)
	{
		r= num%10; // eg: num = 10 10%10 = 0//
		s=s+r;	// s = 0+0 = 0 //
		num = num/10;	// 10 = 10/10 = 1 (repeats with 1 untill n == 0)//
	}
	printf("Sum of %d is %d \n",temp, s);
}

