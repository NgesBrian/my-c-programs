#include<stdio.h>
int main()
{
  int ch,nc;
  nc=0;
 printf("Enter a word or sentence\n");
 while((ch=getchar())!=EOF){
  ++nc;
 putchar(ch);
 }
 printf("\nnumber of letter(s);%d\n",nc);
  
  return 0;
  }
