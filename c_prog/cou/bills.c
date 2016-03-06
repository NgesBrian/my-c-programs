#include<stdio.h>
int main()
{
	int x1,x2,y1,y2,z1,z2,w,amt;
	
	printf("Enter amount;\n");
	scanf("%d", & amt);
	
	x1=amt/20;
	x2=amt%20;
	y1=x2/10;
	y2=x2%10;
	z1=y2/5;
	z2=y2%5;
	w=z2/1;
	
	printf("$20 bills;%d\n$10 bills;%d\n$5 bills;%d\n$1 bills;%d\n",x1,y1,z1,w);
	
	return 0;
}
