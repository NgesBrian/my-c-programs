#include<stdio.h>
int main()
{
	int m, n, rem;
	
	printf("Enter two intergers: ");
	scanf("%d %d",&m,&n);
	
	printf("Greatest common divisor; ");
	
	if(n==0)
		printf("%d\n",m);
	else if(m==0)
		printf("%d\n",n);
	else {
		if(m>n){
			rem=m%n;
			if(rem==0)
				printf("%d\n",n);
			else
				printf("%d\n",rem);
		}
		else{
			rem=n%m;
			if(rem==0)
				printf("%d\n",m);
			else
				printf("%d\n",rem);
		}
	}
	return 0;
