#include<stdio.h>
int main()
{
	int nd,n,j,k,i;
	j=0;
	
	printf("Enter number of days in month:");
	scanf("%d",&nd);
	printf("Starting day of week (1=Sunday, 7=Saturday):");
	scanf("%d",&n);
	
	for(k=n;k>1;k--){
		printf(" \t");
		j++;
		if(j==7)
			printf("\n");
		}
	for(i=1;i<=nd;i++){
		printf("%d\t",i);
		j++;
		if((j%7) == 0)
			printf("\n");
		}
	printf("\n");
	return 0;
}
