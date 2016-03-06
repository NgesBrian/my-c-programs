#include<stdio.h>
int main()
{
 int ch,nl,nw,nc;
 nl=nw=nc=0;
 printf("Enter your statements\n");
 ch=getchar(); 
 while(ch!='\n'){
    ++nc;
 if(ch==' '||ch=='\t'||ch=='\n')
  ++nw;
  if(ch=='.')
   ++nl;
  }
  nw=nw+1;
    printf("%d\t%d\t%d\n",nl,nw,nc);
   return 0;
  }
