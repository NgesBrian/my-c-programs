#include<stdio.h>
int main()
{
	int i,n,y,r,sum=0;
	srand((unsigned)time(NULL));
	printf("Enter a number range: ");
	scanf("%d",&r);
	printf("Enter a limit of random numbers: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		y=1+rand()%r; /* a number between 1 and r*/
		printf("%d+",y);
		sum+=y;
	}
	printf("\b=%d\n",sum);
return 0;
}
