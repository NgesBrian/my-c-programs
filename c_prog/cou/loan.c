#include<stdio.h>
int main ()
{
	float l,r1,r2,p,b;
	int i;
	
	printf("Enter amount of loan;\n");
	scanf("%f",&l);
	printf("Enter interest rate;\n");
	scanf("%f",&r1);
	printf("Enter monthly payement;\n");
	scanf("%f",&p);
	
	r2=(r1/100)/12;
	for(i=1;i<=3;i++)
	{
		
		b=(l-p)+(r2*l);
		printf("Balance remaining after %d payment;%.2f\n",i,b);
		l=b;
	}
	return 0;
}
	
