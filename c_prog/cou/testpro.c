#include<stdio.h>
int main()
{
 	FILE *fp;
 	char buff[100];
 	fp=fopen("test.txt","r");
 	fscanf(fp,"%s",buff);
 	printf("1- %s\n",buff);
 	fgets(buff,200,fp);
 	printf("2- %s\n",buff);
 	fgets(buff,200,fp);
 	printf("3- %s\n",buff);
 	fclose(fp);
 	return 0;
 	
}
