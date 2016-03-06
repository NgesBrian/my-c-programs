#include<stdio.h>
int main()
{
	float x,v;
	
	printf("Enter the value of x\n");
	scanf("%f",&x);

	v=(((((3*x+2)*x-5)*x-1)*x+7)*x-6);
	
	printf("The anwser is; %.2f\n",v);
	
	return 0;
}
