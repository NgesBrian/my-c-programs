#include<stdio.h>
int main()
{
	char name[20], name2[20], ch;
	
	printf("Enter your name: ");
	ch=getchar();
	scanf("%s %s",name, name2);
	printf("Your name is: %s, ",name2);
	putchar(ch);
	printf("\n");
	
	return 0;
}
