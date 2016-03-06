#include <stdio.h>

int main (){

	int N,M,peri,i,j;
	scanf("%d",&M);
	scanf("%d",&N);

	if(M>=2 && N<=500){
		char string[M][N];	
		for(i=0;i<M;i++){
			for(j=0;j<N;j++){

				scanf("%c",&string[i][j]);
				//if(string[i][j]!='.' || string[i][j]!='x'){
				//	return;
				//}			
			}
		}
		if(string[0][0]=='.'&&string[0][N-1]=='.'&&string[M-1][0]=='.'&&string[M-1][N-1]=='.'){
			peri=2*(M-1)+2*(N-1);
			printf("%d\n",peri);
		}
		else{
			printf("imposible\n");
		}	
	}
	else{
		printf("impossibe\n");
	}
	
return 0;
}
