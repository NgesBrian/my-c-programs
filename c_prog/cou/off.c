#include<stdio.h>
int main()
{
 	float amt, tax_added, amt_tax;
 	float a,b;
 	a=100.00;
 	b=5.00;
 	
 	printf("Enter an amount;");
 	scanf("%f",&amt);
 	
 	tax_added=(b/a)*amt;
 	amt_tax=tax_added+amt;
 	
 	printf("With tax added;%.2f\n",amt_tax);
 	
 	return 0;
 }
