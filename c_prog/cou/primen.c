#include<stdio.h>
int main()
{
	int n, i, j, r;
	
	printf("Enter your prime number limit:");
	scanf("%d",&n);
	printf("Prime numbers are;{");
	
	if(n>=2)
		printf("2, ");
	else
		printf(" ");
	
	for(i=3;i<=n;i++){
		for(j=2;j<i;){
			r=i%j;
			if(r==0){
				break;}
				j++;
		}
			if(r!=0)
				printf("%d, ",i);
	}
	printf("}\n");
	return 0;
}
