#include<stdio.h>
int main()
{
	int A[5], B[11],i,j;
	
	printf("Please input the elements of set A: ");
	for(i=0;i<5;i++)
		scanf("%d",&A[i]);
	printf("please input the elements of set B: ");
	for(j=0;j<11;j++)
		scanf("%d",&B[j]);
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		 	if(A[i]==B[j])
		 		printf("%d",A[i]);
		}
		printf("\n");
	}
	return 0;
}

