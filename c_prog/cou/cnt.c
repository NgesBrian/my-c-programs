#include<stdio.h>
int main()
{
  long nc;
  int c;
  nc=0;
  c=getchar();
  while(c!=EOF)
   printf("%ld",nc);
   nc++;
  return 0;
}
