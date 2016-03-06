#include<stdio.h>
int main()
{
	int n, d;
	printf("Enter your number;");
	scanf("%d",&n);
	
	for(d=2;d<n;d++){
		if(n%d==0)
			break;}
			if(d<n)
			printf("%d is divisible by %d\n",n,d);
		else
			printf("%d is a prime number\n",n);
		
	return 0;
}
