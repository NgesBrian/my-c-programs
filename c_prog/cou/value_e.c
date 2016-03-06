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
	int j, z=1;
	for(j=x;j<0;j--)
		z=z*j;
	return z;
}
