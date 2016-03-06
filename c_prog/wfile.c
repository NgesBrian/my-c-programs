//count word

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int c, in_word=0;
	long words = 0;
	//int *fptr;
	//fptr=fopen("file.txt",r);
	//fprintf(fptr, "%s\n", );
	while((c=getchar())!=EOF)
	{
	if(c == ' '|| c == '\n' || c == '\t')
	{
		in_word = 0;
	}
	else if(!in_word)
	{
		in_word = 1;
		words++;
	}
	}
	printf("%ld words counted\n", words);
	return EXIT_SUCCESS;

}