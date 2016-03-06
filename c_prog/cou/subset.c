#include<stdio.h>
int main()
{
	int x, y, l=0, i, j, k=0;
	start:printf("\nN.B;No of elts in 1st set should be >= no elts in 2nd set\n");
	printf("Enter the number of elements in the first set: ");
	scanf("%d",&x);
	int A[x];
	printf("Enter the number of elements in the second set: ");
	scanf("%d",&y);
	int B[y];
	if(y>x){
		printf("ERROR!!!\n");
		goto start;
	}
	printf("Enter the elements in set A: ");
	for(i=0;i<x;i++)
		scanf("%d",&A[i]);
	printf("Enter the elements in set B: ");
	for(j=0;j<y;j++)
		scanf("%d",&B[j]);
	
	if(x==y){
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				if(A[i]==B[j])
				k=k+1;
			}
		if(k>0)
			l=l+1;
			k=0;
		}
		if(l==x)
			printf("A is a subset of B\n");
		else
			printf("A is not a subset of B\n");
	}
	else{
		for(j=0;j<y;j++){
			for(i=0;i<x;i++){
				if(B[j]==A[i])
					k=k+1;
			}
				if(k>0)
					l=l+1;
					k=0;
		}
		if(l==y)
			printf("B is a proper subset of A\n");
		else
			printf("B is not a proper subset of \n");
	} 
	return 0;
}
