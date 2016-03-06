#include<stdio.h>
int main()
{
 int mm,dd,yyyy;
 printf("Enter the date(mm/dd/yyyy):");
 scanf("%d/%d/%d",&mm,&dd,&yyyy);
 printf("%d%2d%2d\n",yyyy,mm,dd);
 return 0;
}
