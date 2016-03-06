#include<stdio.h>
int main()
{
	int Array[4][4], i, j;
	int sum=0;
	
	printf("Enter your numbers;");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++){
			scanf("%d",&Array[i][j]);
			}
		}
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
			printf("%3d",Array[i][j]);
			}
			printf("\n");
		}
	printf("\nsum of rows; ");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			sum+=Array[i][j];
			}
			printf("%d\t",sum);
			sum=0;
		}
	printf("\nsum of columns; ");
	for(j=0;j<4;j++){
		for(i=0;i<4;i++){
			sum+=Array[i][j];
			}
			printf("%d\t",sum);
			sum=0;
		}
	printf("\n");
	
	return 0;
}
