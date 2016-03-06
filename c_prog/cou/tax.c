#include<stdio.h>
int main()
{
	int income;
	float tax;
	
	printf("Enter your amount of taxable income;");
	scanf("%d$",&income);
	printf("Amount of tax;");
	
	if(income<750){
		tax=0.01*income;
		printf("%.2f",tax);
		}
	else if(750<=income && income<2250){
	    tax=7.50f + 0.02f * income;
		printf("%.2f\n",tax);
		}
	else if(2250<=income && income<3750){
	    tax=37.50f + 0.03f * income;
		printf("%.2f\n",tax);
		}
	else if(3750<=income && income<5250){
	    tax=82.50f + 0.04f * income;
		printf("%.2f\n",tax);
		}
	else if(5250<=income && income<7000){
	    tax=142.50f + 0.05f * income;
		printf("%.2f\n",tax);
		}
	else {
	    tax=230.00f + 0.06f * income;
		printf("%.2f\n",tax);}
	
	return 0;
}
