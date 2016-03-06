#include<stdio.h>

int fac(int x);

int main()
{
	int n,i;
	float e=1;
	
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		e= e + (1/(fac(i)));
	printf("Value of is %.4f.\n",e);
	
	return 0;
}
int fac(int x)
{
	int z;
	x=1;
	if(x<=1)
		return 1;
	else
		return x*fac(x-1);
}
