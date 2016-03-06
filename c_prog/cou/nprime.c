#include<stdio.h>
int main()
{
	int num,i,cnt=1,ct=1,j,rem;
	
	printf("Enter your number of prime numbers:");
	scanf("%d",&num);
	printf("{");
	
	for(i=2;cnt<=num;i++){
		for(j=1;j<=i;j++){
			rem=i%j;
			if(rem==0)
				ct+=1;
		}
				if(ct>2)
					printf("%d ,",i);
					cnt+=1;
	}
	printf("\b}\n");		
	
	return 0;
}
