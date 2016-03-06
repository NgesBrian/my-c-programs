#include<stdio.h>
int main()
{
	int i, n;
	float l, r, p, b;
	
	printf("Enter amount of loan:");
	scanf("%f",&l);
	printf("Enter interest rate:");
	scanf("%f",&r);
	printf("Enter monthly payment:");
	scanf("%f",&p);
	printf("Enter the number of payments:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		b=(l-p)+(l*((r/100)/12));
		printf("Balance remaining after %d payment:%.2f\n",i,b);
		l=b;
	}
	return 0;
}
