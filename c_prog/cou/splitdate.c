#include<stdio.h>
void split_date(int day_of_year, int year, int *month, int *day);
int main()
{
	long int day_of_year;
	int year, month, day;
	printf("Enter the day of the day: ",day_of_year);
	scanf("%d",& day_of_year);
	printf("Enter the year:\t");
	scanf("%d",&year);
	spit_date(day_of_year, year, month, day);
	printf("The date is: %d/%d/%d.\n",year, month, day);
	return 0;
}
void split_date(int day_of_year, int year, int *month, int *day){
	int
	
