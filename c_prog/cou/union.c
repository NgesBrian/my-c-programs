#include<stdio.h>
int main()
{
	int A[5], B[5], i, j, k=0;

	printf("Enter the numbers in set A: ");
	for(i=0;i<5;i++)
		scanf("%d",&A[i]);
	printf("Enter the numbers in set B: ");
	for(j=0;j<5;j++)
		scanf("%d",&B[j]);
	printf("The union is: ");
	
	for(i=0;i<5;i++)
		printf("%d,",A[i]);
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			if(B[j]==A[i])
				k=k+1;
		}
			if(k==0)
				printf("%d,",B[j]);
			k=0;
	}
	printf("\b\n");
	return 0;
}
