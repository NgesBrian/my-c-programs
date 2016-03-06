#include<stdio.h>
int main()
{
	int i, n, cnt=0, rem;
	char ch;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table:");
	scanf("%d",&n);
	
	i=1;
	rem=0;
	while (i<=n){
		printf("%10d%10d\n",i,i*i);
		i++;
		cnt+=1;
		rem=cnt%24;
		if(rem=0){
			system("pause");
			printf("press enter to continue: ");
			ch=getchar();
			while(ch!='\n')
				system("pause");
		}
		rem=0;		
	}
	return 0;
}
