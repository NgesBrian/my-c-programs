#include<stdio.h>
int fac(int x);
int main()
{
	int i;
	float e, e1=1;
	
	printf("Enter the valu of e: ");
	scanf("%f",&e);
	
	for(i=1;e1<e;i++)
		e1=e1*(1/(fac(i)));
	printf("The value is: %.4f.\n",e1);
	
	return 0;
}
int fac(int x)
{
	int j, z=1;
	for(j=x;j<0;j--)
		z=z*j;
	return z;
}

