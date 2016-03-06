#include<stdio.h>
int main()
{
	float speed;
	
	printf("Enter the wind speed(in knots);");
	scanf("%f",&speed);
	printf("Description;");
	
	if(speed<1)
		printf(" Calm\n");
	else if(1<=speed && speed<=3)
		printf(" Light air\n");
	else if(4<=speed && speed<=27)
		printf(" breeze\n");
	else if(28<=speed && speed<=47)
		printf(" Gale\n");
	else if(48<=speed && speed<=63)
		printf(" Storm\n");
	else
		printf(" hurricane\n");
	
	return 0;
}
