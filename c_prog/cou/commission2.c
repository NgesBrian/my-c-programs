#include<stdio.h>
int main()
{
	float commission_broker,commission_rival,value,price;
	int shares;
	
	printf("Enter number of shares;");
	scanf("%d",&shares);
	printf("Enter price per shares;");
	scanf("%f",&price);
	value=shares*price;
	
	if(shares<2000)
		commission_rival=33.00f+(0.03f*shares)*price;
	else
		commission_rival=33.00f+(0.02f*shares)*price;
	
	if(value<2500.00f)
		commission_broker=30.000f+0.017f*value;
	else if(value<6250.00f)
		commission_broker=56.000f+0.0066f*value;
	else if(value<20000.00f)
		commission_broker=76.000f+0.0034f*value;
	else if(value<50000.00f)
		commission_broker=100.00f+0.0022f*value;
	else if(value<500000.00f)
		commission_broker=155.00f+0.0011f*value;
	else
		commission_broker=255.00f+0.009f*value;
		
	if(commission_broker<39.00f)
		commission_broker=39.00f;
	
	printf("Broker's Commission;$%.2f\tRival's commission;$%.2f\n",commission_broker,commission_rival);
	
	return 0;
}
