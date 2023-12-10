#include <stdio.h>
#include <stdlib.h>
void main() 
{
  int x,y,num4,num5;
  printf("x and y value shouldnt be equal\n");
  printf("Enter the value of x\n");
  scanf("%d",&x);
  printf("Enter the value of y\n");
  scanf("%d",&y);
  
  num4=((x + y) + abs(x - y)) / 2;
  printf("\n--------------------");
   printf("\nlargest among two is %d",num4);
   printf("\n-------------------");
   
   num5=((x + y) - abs(x - y)) / 2;
   printf("\nsmallest among two is %d",num5);
}