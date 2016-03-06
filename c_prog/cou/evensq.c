#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter your square limit;");
	scanf("%d",&n);
	
	for(i=1;i*i<=n;i++){
	  if(i%2==0)
		printf("%d\n",i*i);
		}
	
	return 0;
}
