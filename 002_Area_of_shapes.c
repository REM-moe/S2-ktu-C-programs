#include<stdio.h>
void main ()
{
// Circle //
	int r ; //variale to store radius user enters//
	printf("Enter radius of circle \n");
	scanf("%d ",&r) ; 
/* takes input from user '%f' - act a place holder for the float  to come into place  and %d for int 
	
	| & - ampersand 
	
	
	either make a seperate variable called area like this
	before that you need to declare it so the code goes like
	float area ;
	area = r * r * 3.14;
	and print area 
	*/
	
	printf("Area of circle with radius = %d is %0.4f /\n",r, (r*r*3.14)) ;	
}
