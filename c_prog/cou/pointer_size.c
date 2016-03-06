#include<stdio.h>
#include<stdlib.h>
int *rsize(int num[], int size);
int main(){
	int i, size, *p;
	
	printf("Enter the size of your array: ");
	scanf("%d",&size);
	
	int num[size];
	p=rsize(num, size);
	for(i=0;i<2;i++){
		printf("%d\n",*(p+i));
	return 0;
}
int *rsize(int num[], int size){
	static int re_size[2];
	int big, small, i;
	srand((unsigned)time(NULL));
	small=big=0;
	for(i=0;i<size;i++){
		num[i]=1+rand()%10;
		printf("%d\n",num[i]);
		if(num[i]>big)
			big=num[i];
		else if(num[i]<small)
			small=num[i];
	}
	re_size[0]=big;
	re_size[1]=small;
	
	return re_size;
}
