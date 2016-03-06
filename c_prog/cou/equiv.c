#include<stdio.h>
#include<stdbool.h>
int main(){
int p,q,r,a,b,i,t1,t2,f1,f2;
bool x,y1,y2;
bool result[8];
int k=0;
{
 printf("Choose two opperators a and b respectively\n");
 printf("1-for AND gate\n2-for OR gate\n3-for XOR gate\n4-for IMPLIES\n");
 scanf("%d",&a);
 scanf("%d",&b);
 printf("\n");
 switch(a){
  case 1:
   printf("pANDq");
   break;
  case 2:
   printf("pORq");
   break;
  case 3:
   printf("pXORq");
   break;
  case 4:
   printf("pIMPLIESq");
   break;}
 switch(b){
  case 1:
   printf("ANDr\n");
  break;
  case 2:
   printf("ORr\n");
   break;
  case 3:
   printf("XORr\n");
   break;
  case 4:
   printf("IMPLIESr\n");
   break;}
   for(p=0;p<2;p++){
    for(q=0;q<2;q++){
     for(r=0;r<2;r++){
     
       switch(a){
         case 1:
          x=p&q;
          break;
         case 2:
          x=p|q;
          break;
         case 3:
          x=p^q;
          break;
         case 4:
          x=!p|q;
         break;
         default:
         printf("ERROR!!");}
       switch(b){
       case 1:
        y1=x&r;
        break;
        case 2:
        y1=x|r;
        break;
        case 3:
        y1=x^r;
        break;
        case 4:
        y1=!x|r;
        break;
        default:
        printf("ERROR!!\n");}
     	result [k]=y1;
     	k++;
     	printf("%d\t%d\t%d\t%d\n",p,q,r,y1);
     }
    }
   }
   int f1=0;
   int t1=0;
    for(i=0;i<8;i++);{
      if(result[i]==true){
        t1++;}
      else {
        f1++;}
      }
      if(t1==8){
       printf("The output is a Tautolgy\n"); }
      else {if(f1==8 ){
       printf("The output is a contradiction\n");}
      else{
       printf("The output is a contigency\n");}}
	 }
 {	 
 	printf("Choose two opperators a and b respectively\n");
 	printf("1-for AND gate\n2-for OR gate\n3-for XOR gate\n4-for IMPLIES\n");
 	scanf("%d",&a);
 	scanf("%d",&b);
 	printf("\n");
 	switch(a){
 	 case 1:
 	  printf("pANDq");
 	  break;
 	  case 2:
   	printf("pORq");
   	break;
  	case 3:
  	 printf("pXORq");
  	 break;
  	 case 4:
   	printf("pIMPLIESq");
   	break;}
 	switch(b){
  	case 1:
  	 printf("ANDr\n");
  	break;
  	case 2:
  	 printf("ORr\n");
  	 break;
  	case 3:
  	 printf("XORr\n");
  	 break;
  	case 4:
  	 printf("IMPLIESr\n");
  	 break;}
  	 for(p=0;p<2;p++){
  	  for(q=0;q<2;q++){
  	   for(r=0;r<2;r++){
  	   
  	     switch(a){
  	       case 1:
  	        x=p&q;
  	        break;
  	       case 2:
  	        x=p|q;
       	        break;
     	        case 3:
          	x=p^q;
          	break;
         	case 4:
    	         x=!p|q;
        	 break;
        	 default:
       	 	printf("ERROR!!");}
       		switch(b){
       		case 1:
        	y2=x&r;
        	break;
       		case 2:
        	y2=x|r;
        	break;
       		case 3:
       		y2=x^r;
       		break;
       		case 4:
       		y2=!x|r;
       		 break;
       		default:
       		 printf("ERROR!!\n");}
     		result [k]=y2;
     		k++;
    		 printf("%d\t%d\t%d\t%d\n",p,q,r,y2);
     }
    }
   }
   		int f2=0;
  	 	int t2=0;
    		for(i=0;i<8;i++);{
   		if(result[i]==true) {
        	t2++;
        	}
      		else {
        	f2++;
        	}
      	}
     		 if(t2==8){
       	printf("The output is a Tautology\n"); }
      	else {if(f2==8 ){
       	printf("The output is a contradiction\n");}
      	else{
       	printf("The output is a contigency\n");}}
   }
   	if (t1 == t2 || f1 == f2) {
   		printf("The expressions are Equivalent\n");
   		}
   	else { 
   		if (y1 == y2) {
   		printf("The expressions are  Equivalent\n");
   		}
   		else {
   		printf("The expressions are NOT Equivalent\n");
   		}
   	}
 }
