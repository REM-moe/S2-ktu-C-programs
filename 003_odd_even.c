#include <stdio.h>
int main()
{
	// to check if number is Odd/Even //
	printf("Enter A Number to check if ODD/EVEN \n");
	int num;
	scanf("%d",&num);
	if (num%2==0)
	{
	printf("%d , is Even ! \n",num);
	printf("Exiting....\n");
	}
	else
	{
	printf("%d , is Odd ! \n",num);
	}
	return 0;
}


/* if check if a condition is true/false if yes it executes its block of code if false 
then it move to its counter else part where it executes (if/else are control flow statements )   
*/
