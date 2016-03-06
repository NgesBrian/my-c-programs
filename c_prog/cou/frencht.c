#include<stdio.h>
int main()
{
	int hour, mins;
	printf("Enter a 24-hour time:");
	scanf("%d:%d",&hour,&mins);
	printf("Equivalent 12-hour time:");
	
	switch (hour){
		case 13: printf(" 1:%d PM\n",mins);break;
		case 14: printf(" 2:%d PM\n",mins);break;
		case 15: printf(" 3:%d PM\n",mins);break;
		case 16: printf(" 4:%d PM\n",mins);break;
		case 17: printf(" 5:%d PM\n",mins);break;
		case 18: printf(" 6:%d PM\n",mins);break;
		case 19: printf(" 7:%d PM\n",mins);break;
		case 20: printf(" 8:%d PM\n",mins);break;
		case 21: printf(" 9:%d PM\n",mins);break;
		case 22: printf(" 10:%d PM\n",mins);break;
		case 23: printf(" 11:%d PM\n",mins);break;
		case 00: printf(" 12:%d AM\n",mins);break;
		default: printf(" %d:%d AM\n",hour,mins);
		}
	
	return 0;
}
