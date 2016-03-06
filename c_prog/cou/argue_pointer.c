#include<stdio.h>
#include<stdlib.h>
void max_min(int a[], int *max, int *min);
#define N 10
int main()
{
	srand((unsigned)time(NULL));
	int i, big, small, a[N];
	for(i=0;i<N;i++)
		a[i]=1+rand()%10;
	max_min( a, &big, &small);
	printf("The biggest number is: %d.\n",big);
	printf("The smallest number is: %d.\n",small);
	
	return 0;
}
void max_min(int a[], int *max, int *min){
	int i;
	*max=*min=0;
	for(i=0;i<N;i++){
		if(a[i]>*max)
			*max=a[i];
		else if(a[i]<*min)
			*min=a[i];
	}
}
