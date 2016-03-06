#include<stdio.h>
int main()
{
	int num, a, b;
	// int c[5];
	start:printf("Enter a number between 0 and 32767;");
	scanf("%d",&num);
	printf("In octal, your number is:");
		
	if(0<num && num<32767){
		while(num!=0){
			a=num / 8;
			b=num % 8;
			//for(i=0;i<5;i++)
				//c[i]=0;
		//	c[i]=b;}
				
		//	for(i=5;i>0;i--){
			printf("%d",b);
			num=a;
			}
		}
	printf("\n");
	else{
		printf("Wrong value\n");
		goto start;
	}
	
	return 0;
}
