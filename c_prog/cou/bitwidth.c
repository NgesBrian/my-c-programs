#include<stdio.h>
#include<string.h>
struct{
	unsigned int widthvalidated;
	unsigned int heightvalidated;
	}struct1;
	
struct {
	unsigned int widthvalidated : 1;
	unsigned int heightvalidated: 2;
}struct2;
	
int main()
{
	printf("Memory size occupied by status : %ld\n", sizeof(struct1));	
	printf("Memory size occupied by status : %ld\n", sizeof(struct2));
	
	return 0;
}	 
