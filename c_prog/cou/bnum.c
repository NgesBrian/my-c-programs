#include<stdio.h>
int main()
{
 int num,big;
  printf("Enter a number and 0 if you want the program to stop\n");
  scanf("%d",&num);
  big=0;
  while(num!=0)
   {
    if(num>big)
      big=num;
      scanf("%d",&num);
  }
    printf("largest is %d\n",big);
   return 0;
   } 
