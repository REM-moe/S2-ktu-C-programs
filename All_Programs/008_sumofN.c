#include <stdio.h>
void main()
{
	int n,r,s,temp ;
	// to print sum of digit ie. 123 = 1+2+3 = 6 //
	printf("Enter the digit ! \n");
	scanf ("%d",&n);
	s = 0;
	temp = n ;
	while (n!=0)
	{
		r = n%10 ; //gets us remainder //
		s = s + r; // sum ie 0 + remainder //
		n = n/10; // /10 ie 430/10 = 43.00 //
	} 
	printf ("sum of %d is = %d \n",temp,s);
}
