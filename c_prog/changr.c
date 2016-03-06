//change length

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	int i=1;
	char y[]="Hello World";
	while(i<=strlen(y)){

		printf("%.*s\n",i++,y );
	}
return EXIT_SUCCESS;
}