#include<stdio.h>

int pw(int a,int b);
int main()
{
	int n, p, a;
	
	printf("Enter the number and power(n p): ");
	scanf("%d %d",&n, &p);
	a=pw(n,p);
	printf("The answer is:%d.\n",a);
	
	return 0;
}
int pw(int a,int b)
{
	int x=1;
	if(b==0)
	x=a*x;
	else
		x=x*a*pw(a,b-1);
	return x;
}
