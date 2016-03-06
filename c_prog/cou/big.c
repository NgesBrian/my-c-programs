#include<stdio.h>
int main()
{
	float a=0;
	float big;
	
	printf("Enter a number:");
	scanf("%f",&a);
	big=a;
	printf("Enter a number:");
	scanf("%f",&a);
	
	while(a>0){
		if(a>big)
			big=a;
			printf("Enter a number:");
			scanf("%f",&a);
		}
	printf("The largest number entered was %f\n",big);
	return 0;
}
