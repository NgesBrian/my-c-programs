#include<stdio.h>
int main()
{
	int x,x1,x2,y1,y2,b;
	int a=10,z=100;
	
	printf("Enter a three-digit number;");
	scanf("%d",&x);
	
	x1=x/a;
	y1=x%a;
	x2=x1/a;
	y2=x1%a;
	b=(z*y1)+(a*y2)+x2;
	
	printf("The reversal is;%d\n",b);
	
	return 0;
}
