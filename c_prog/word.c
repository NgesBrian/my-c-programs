//count word

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
	int *ptr;
	ptr=(int *)malloc(26);
	while((c=getchar())!=EOF){
	       num++;	
			if(isalpha(c)==0)
		     alcount++;
				for(i=0;i<26;i++){
					if(c==*ptr){

					break;
					}

				}
				for(i=0;i<26;i++){
				if(*ptr!=NULL && *ptr++==NULL){
					*ptr++=c;
					
				}
				}             	
		     }

	printf("%ld words counted\n", words);

	return EXIT_SUCCESS;

}