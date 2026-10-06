#include<stdio.h>
int main()
{
  int array[7],i;
  printf(" please input 7 numbers\n");
  for(i=0;i<=6;i++)
  {
    scanf("%d",&array[i]);
  }
  printf(" output the numbers:\n");
  for(i=0;i<=6;i++)
  {

  printf("%d\n",array[i]);
  }


  return 0;
}
