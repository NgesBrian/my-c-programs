#include <stdio.h>

int main(){
int N,K,min,t,i,j;
	printf("input the number of packets of codies bill has");
	scanf("%d",&N);
	printf("input the number of children in the village ");
	scanf("%d",&K);
int array[N];

	printf("Please input the various number of codies each parket owned by bill has");
	for(i=0;i<N;i++){
		scanf("%d",&array[i]);
	}
	

	for(i=0;i<N;i++){
	for(j=0;j<N;j++){
		if(  array[i]<array[j]){
			t=array[i];
			array[i]=array[j];
			array[j]=t;
		}
	}
	}

	for(i=0;i<N;i++){
		printf("%d ",array[i]);
	}

	min=array[K-1]-array[0];
	printf("the minimal possible unfairness is %d",min);
return 0;
}
