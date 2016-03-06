#include<stdio.h>
/* #define message_for(a,b) \
	printf(#a" and "#b":We love you!\n");
int main(){
	message_for(Carole, Debra);
	return 0;
} */

/* #define tokenpaster(n) \
	printf("token" #n "= %d\n",token##n)
int main()
{
	int token34=40;
	tokenpaster(34);
	return 0;
}  */

/* #if !defined (MESSAGE)
	#define MESSAGE "You wish!!"
#endif
int main()
{
	printf("Here is the message: %s\n",MESSAGE);
	return 0;
}  */

#define MAX(x,y) ((x)>(y))?(x):(y))
int main()
{
	printf("Max between 20 annd 10 is %d\n",MAX(10,20);
	return 0;
}
