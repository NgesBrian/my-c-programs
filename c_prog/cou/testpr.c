#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("test.txt","w");
	fprintf(fp,"This is testing for fprintf...\n");
	fputs("This is testing for puts...\n",fp);
	fclose(fp);
	return 0;
}