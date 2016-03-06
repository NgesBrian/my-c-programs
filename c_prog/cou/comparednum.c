#include<stdio.h>
int main()
{
	int m, d, y, Bm, Bd, By;
	
	printf("Enter first date (mm/dd/yy):");
	scanf("%d/%d/%d",&m,&d,&y);
	
	Bm=m; Bd=d; By=y;
	
	printf("Enter second date (mm/dd/yy);");
	scanf("%d/%d/%d",&m,&d,&y);
	
	if(y<By)
		printf("%d/%d/%d is earlier than %d/%d/%d\n",m,d,y,Bm,Bd,By);
	else if(y==By && m<Bm)
		printf("%d/%d/%d is earlier than %d/%d/%d\n",m,d,y,Bm,Bd,By);
	else if(y==By && m==Bm && d<By)
		printf("%d/%d/%d is earlier than %d/%d/%d\n",m,d,y,Bm,Bd,By);
	else
		printf("%d/%d/%d is earlier than %d/%d/%d\n",Bm,Bd,By,m,d,y);
	
	return 0;
}
	
	
