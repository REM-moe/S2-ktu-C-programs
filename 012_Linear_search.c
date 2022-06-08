#include <stdio.h>
void main()
{
  int a[50],i,j,k,num;
  printf("Enter size of Array\n");
  scanf("%d",&num);
  printf("Size enetered is %d \n",num);
  printf("Enter the Elements\n");
  for (i=0;i<num;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the element to be searched\n");
  scanf("%d",&k);
  
  for (j=0;j<num;j++)
  {
    if (k==a[j])
    {
      printf("Element , %d is present at index %d\n",k,j);
      break;
    }
    if (k == j)
    {
      printf("Elemet is not Present\n");
    }
  }
}
