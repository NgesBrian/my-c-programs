#include<stdio.h>
int main()
{
	char ch;
	int i;
	
	printf("Enter your statement or word;");
	ch=getchar();
	i=0;
	while(ch!='\n'){
		if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u')
			i=i+1;
			ch=getchar();
	}
		
	printf("Number of vowels=%d\n",i);
	return 0;
}
