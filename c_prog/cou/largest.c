#include<stdio.h>
int main()
{
	int n1, n2, n3, n4, big, small;
	
	printf("Enter four integers:");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	big=n1;
	small=n1;
	
	if(n2>big)
		big=n2;
	else
		small=n2;
	if(n3>big)
		big=n3;
	else if(n3<small)
		small=n3;
	if(n4>big)
		big=n4;
	else if(n4<small)
		small=n4;
	
	printf("Largest: %d\nSmallest: %d\n",big,small);
	return 0;
}
