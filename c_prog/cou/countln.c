#include<stdio.h>
int main()
{
 int ch,nw;
 nw=0;
 printf("Enter the a sentence\n");
while((ch=getchar())!='\n'){
 if((ch=getchar())==' ')
   ++nw;
   }
   printf("number of word(s);%d\n",nw+1);
 
 return 0;
}
