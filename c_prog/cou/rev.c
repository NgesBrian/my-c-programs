#include<stdio.h>
int main()
{ 
  int rem=0, rev=0, num;
  
  printf("Enter a number\n");
  scanf("%d",&num);
  do{
   rem=num%10;
   num=num/10;
   rev=(rev*10)+rem;
   }while(num>0);
   printf("%d\n",rev);
   return 0;
   }
