#include<stdio.h>
// #include<stdlib.h>
void split_time(long total_sec, int *hr, int *min, int *sec);
int main()
{	 long int total_sec;
	 int hr, min, sec;
	printf("Enter your time in seconds : ");
	scanf("%ld",&total_sec);
	hr=min=sec=0;
	split_time(total_sec, &hr, &min, &sec);
	printf("%d:%d:%d\n",hr,min,sec);
	return 0;
}
//defining the prototype.
void split_time(long total_sec, int *hr, int *min, int *sec)
{
	int hh;
	*hr=total_sec/3600;
	hh=total_sec%3600;
	*min=hh/60;
	*sec=hh%60;
}
