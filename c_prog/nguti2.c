#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count=0;
	char var;

	for(;;){
		var=getchar();
		if(var=='\n'){
			count++;
			printf("%d\n",count );
		}
		else if(var=='1'){
			return;
		}
	}
	
	return 0;
}
