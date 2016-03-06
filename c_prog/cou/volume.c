#include<stdio.h>
int main()
{
	int r,p;
	float v;
	p=22/7;
	
	printf("Enter the radius\n");
	scanf("%d",&r);
	v=((4/3)*p*(r*r*r));
	printf("%.2f\n",v);
	
	return 0;
}
