#include<stdio.h>
void inter(int A[], int a, int B[], int b);
void uni (int A[], int a, int B[], int b);
void complement(int A[], int a, int B[], int b);
void sub(int A[], int a, int B[], int b);
int main()
{
	int a, i, j, k, b, x, u;
	start:printf("Enter number of elements in the universal set: ");
	scanf("%d",&u);
	int U[u];
	printf("Enter the universal set: ");
	for(i=0;i<u;i++)
		scanf("%d",&U[i]);
	printf("Enter number of element in set A: ");
	scanf("%d",&a);
	int A[a];
	printf("Enter the elements in set A: ");
	for(j=0;j<a;j++)
		scanf("%d",&A[j]);
	printf("Enter number of element in set B: ");
	scanf("%d",&b);
	int B[b];
	printf("Enter the elements in set B: ");
	for(k=0;k<b;k++)
		scanf("%d",&B[k]);
	printf("Key in your command: ");
	printf("\n1-Intersection\n2-Union\n3-A complement\n4-B complement\n");
	printf("5-A is a subset of B\n6-B is a subset of A\n0-Exit\n");
	scanf("%d",&x);
	while(x!=0){
	switch (x){
		case 1:
		  printf("AnB: ");
		  inter( A, a, B, b);
		  printf("\n");
		  break;
		case 2:
			printf("AuB: ");
			for(i=0;i<a;i++)
				printf("%d",A[i]);
		  uni( A,a, B,b);
		  printf("\n");
		  break;
		 case 3:
		   printf("A': ");
		   complement( A,a, U,u);
		   printf("\n");
		   break;
		 case 4:
		   printf("B': ");
		  complement(B,b, U,u);
		  printf("\n");
		  break;
		case 5:
		  if(a>b){
		  	printf("ERROR!!!");
		  	goto start;}
		  else{
		  	sub(A, a, B, b);
		  	printf("\n");}
		  break; 
		case 6:
		  if(b>a){
		  	printf("ERROR!!!");
		  	goto start;}
		  else{
		  	sub(A,a, B, b);
		 	printf("\n");}
		  break;
	}
	printf("Key in your command: ");
	printf("\n1-Intersection\n2-Union\n3-A complement\n4-B complement\n");
	printf("5-A is a subset of B\n6-B is a subset of A\n0-Exit\n");
	scanf("%d",&x);
	}
	return 0;
	}
	void inter(int A[], int a, int B[], int b){
	int i=0,k=0,j;
	// int ((*temp)/(temp[i]))=(int*)malloc(int);
	for(;i<a;i++){
		for(j=0;j<b;j++){
		 if(A[i]==B[j])
		  k=k+1;
		 }
		if(k>0)
		k=0;
		printf("%d, ",A[i]);
	}
	}
	
	void uni (int A[], int a, int B[], int b){
	int i=0, k=0, j;
	// int ((*temp)/(temp[i]))=(int*)malloc(int);
	
	for(j=0;j<b;j++){
		k=0;
		for(;i<a;i++){
			if(A[i]==B[j])
				k=k+1;
		}
		if(k==0)
		printf("%d, ",B[i]);
	}
	}
	void complement(int A[], int a, int U[], int u){
	int i, j, k=0;
	// int ((*temp)/(temp[i]))=(int*)malloc(int);
	for(i=0;i<u;i++){
		k=0;
		for(j=0;j<a;j++){
		 if(U[i]==A[j])
		 k=k+1;
		 }
		if(k==0)
		printf("%d, ",U[i]);
	}
	}
	void sub( int A[], int a, int B[], int b){
	int i, j, k=0, l=0;
	if(a==b){
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				if(A[i]==B[j])
				k=k+1;
			}
		if(k>0)
			l=l+1;
			k=0;
		}
		if(l==a)
			printf("A is a subset of B\n");
		else
			printf("A is not a subset of B\n");
	}
	else if(b<a){
		for(j=0;j<b;j++){
			for(i=0;i<a;i++){
				if(B[j]==A[i])
					k=k+1;
			}
				if(k>0)
					l=l+1;
					k=0;
		}
		if(l==b)
			printf("B is a proper subset of A\n");
		else
			printf("B is not a proper subset of A \n");
	}
		else if(a<b){
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				if(B[j]==A[i])
					k=k+1;
			}
				if(k>0)
					l=l+1;
					k=0;
		}
		if(l==a)
			printf("A is a proper subset of B\n");
		else
			printf("A is not a proper subset of B \n");
	}
	}
