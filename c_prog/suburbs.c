#include <stdio.h>
#include <math.h>
int main(){

	int testcase,i;
	
	scanf("%d",&testcase);
	int no_pstation[ testcase];
	int sq[ testcase];
	double compair[testcase],raduis[testcase];

	for(i=0;i<testcase;i++){
	scanf("%d %d",&sq[i],&no_pstation[i]);
	raduis[i]=sqrt((double)sq[i]);
	
	compair[i]=(raduis[i]-2)*(raduis[i]-5)-4/3*(raduis[i]-1)*(raduis[i]-5) + (raduis[i]-1)*(raduis[i]-2);
}
	for(i=0;i<testcase;i++){
	if(compair[i]<=no_pstation[i] )
	{
		printf("possible\n");
	}	
	
	else{
	printf("impossibe\n");
	}
	}

return 0;
}
