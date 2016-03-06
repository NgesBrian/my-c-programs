#include<stdio.h>
int main()
{
	int m, n, rem, gcd, x, y;
	
	start:printf("Enter a fraction: ");
	scanf("%d/%d",&m,&n);
	
	if(n==0)
		goto start;
	else if(m==0){
		gcd=n;
		printf("In lowest terms:%d/%d",m,n);}
	else{
		if(m>n){
			rem=m%n;
			if(rem==0)
				gcd=n;
			else
				gcd=rem;}
		else{
			rem=n%m;
			if(rem==0)
				gcd=m;
			else
				gcd=rem;}
		}
	x=m/gcd;
	y=n/gcd;
	printf("In lowest terms: %d/%d \n",x,y);
	
	return 0;
}
