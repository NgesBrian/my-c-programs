#include<stdio.h>
int main()
{
	int h, m, time;
	
	printf("Enter a 24-hour time:");
	scanf("%d:%d",&h,&m);
	
	time=(h*60)+m;
	
	if(450<=time && time<510)
		printf("Closest departure time is 8:00am\nArriving at 10:16am\n");
	else if(510<=time && time<613)
	 	printf("Closest departure time is 9:43am\nArriving at 11:52am\n");
	else if(613<=time && time<709)
	 	printf("Closest departure time is 11:19am\nArriving at 1:31pm\n");
	else if(709<=time && time<827)
	 	printf("Closest departure time is 12:47pm\nArriving at 3:00pm\n");
	else if(827<=time && time<870)
	 	printf("Closest departure time is 2:00pm\nArriving at 4:08pm\n");
	else if(870<=time && time<975)
	 	printf("Closest departure time is 3:45pm\nArriving at 5:55pm\n");
	else if(975<=time && time<1170)
	 	printf("Closest departure time is 7:00pm\nArriving at 9:20pm\n");
	else if(1170<=time && time<1290)
	 	printf("Closest departure time is 9:45pm\nArriving at 11:58pm\n");
	else
		printf("SORRY!!! No match to your time!!!\n");
	return 0;
}
