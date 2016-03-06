#include<stdio.h>
int main()
{
	int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,j6;
	int first_sum, second_sum, total, a;
	
	printf("Enter the first twelve digit of a EAG;\n");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5,&j6);
	
	second_sum=d+i2+i4+j1+j3+j5;
	first_sum=i1+i3+i5+j2+j4+j6;
	total=(3*first_sum) + second_sum;
	a=9-((total-1) % 10);
	
	printf("Check digit;%d\n",a);
	
	return 0;
}
