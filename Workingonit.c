#include <stdio.h>
int main()
{
int choice,run,size, store[50],i,add;  

/*
choice--> Operation to be performed (+,-,*,/)
run--> Used to check whether operation is to be performed
store[50]--> Array storing user entered number(s)
size--> Number of elements on which operations are to be performed
*/

printf("Enter 1 for addition\n");
printf("Enter 2 for substraction\n");
printf("Enter 3 for multiplication\n");
printf("Enter 4 for division\n");
printf("Enter 5 for power\n");
printf("Enter 0 to exit\n");
run=0;
while(run == 0)
{
printf("Enter your choice: \n");
scanf("%d",&choice);

if (choice == 1)
{
  printf("How many numbers are there to be added? \n");
  scanf("%d",&size);
  printf("Enter numbers to be added\n");
  add = 0;
 
  for (i=0;i<size;i++)
  {
scanf("%d",&store[i]);
add= add + store[i];
}

  printf("Sum is ==> %d\n",add);
  printf("Do you want to continue or not! \n Enter 1 to stop \n Enter 0 to continue");
  scanf("%d",&run);

}

}

return 0 ;
}
