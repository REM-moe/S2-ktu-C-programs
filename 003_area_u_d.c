#include<stdio.h>
#define Pi 3.14
void main ()
{

printf("%f\n ",Pi); 
 	/* You can use #define to define contsants you use in a program 
 	As we can see vaulue 3.140000 is saved in Pi */
 	



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
	// or istead use r*r*Pi as we used #define Pi 3.14 above in line 2 //	
}
