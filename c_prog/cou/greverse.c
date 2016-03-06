#include<stdio.h>
int main()
{
	int num,x,y;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("The reverse is: ");
	
	do{
		x=num/10;
		y=num%10;
		printf("%d",y);
		num=x;}
		
	while(num>0);
	
	printf("\n");
	
	return 0;
}
