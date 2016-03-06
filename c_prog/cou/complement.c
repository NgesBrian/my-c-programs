#include<stdio.h>
int main()
{
	int x, y, i, j, k=0;
	
	printf("Enter the size of the universal set: ");
	scanf("%d",&x);
	printf("Enter the size of the set A: ");
	scanf("%d",&y);
	int U[x];
	int A[y];
	
	
	printf("Enter the universal set of %d numbers: ",x);
	for(i=0;i<x;i++)
		scanf("%d",&U[i]);
	printf("Enter the second set,A of %d numbers: ",y);
	for(j=0;j<y;j++)
		scanf("%d",&A[j]);
	printf("A complement : ");
	
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(U[i]==A[j])
				++k;
		}
		if(k==0){
			printf("Testing1.\n");
			printf("%d, ",U[i]);
		}
		k=0;
	}
	printf("\n");
	
	return 0;
}
