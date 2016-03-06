#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter a number;");
	scanf("%d",&num);
	printf("The number %d has",num);
	
	if(0<=num && num<=9)
		printf(" 1 digit\n");
	else if(10<=num && num<=99)
		printf(" 2 digits\n");
	else if(100<=num && num<=999)
		printf(" 3 digits\n");
	else
		printf(" 4 digits\n");
	
	return 0;
}
