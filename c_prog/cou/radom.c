#include<stdio.h>
#include<stdlib.h>
int main()
{
	srand((unsigned int)time(NULL));
	int random=rand();
	
	printf("%d\n",random);
	return 0;
}
