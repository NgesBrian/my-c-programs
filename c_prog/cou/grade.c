#include<stdio.h>
int main()
{
	int g1, g2;
	
	printf("Enter numerical grade:");
	scanf("%1d%1d",&g1,&g2);
	printf("Letter grade:");
	
	switch (g1){
		case 9: case 10:
			printf("A\n"); break;
		case 8: printf("B\n"); break;
		case 7: printf("C\n"); break;
		case 6: printf("D\n"); break;
		case 5: case 4: case 3: case 2: case 1: case 0:
			printf("F\n");
		default : printf("ERROR!!!!\n");
		}
	return 0;
}
